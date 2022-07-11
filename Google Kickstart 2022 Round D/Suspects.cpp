#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

void solve(int test)
{
    cout << "Case #" << test << ": ";
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[b].push_back(a);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int innocents = 1;
        queue<int> q;
        map<int, int> vis;
        q.push(i);
        vis[i] = 1;
        while (!q.empty())
        {
            int c = q.front();
            q.pop();
            for (auto j : adj[c])
            {
                if (!vis[j])
                {
                    q.push(j);
                    vis[j] = 1;
                    innocents++;
                    if (innocents > k)
                        break;
                }
            }
            if (innocents > k)
                break;
        }
        if (innocents > k)
            ans++;
    }
    cout << ans << endl;
}

int32_t main()
{
    fastio;
    int t;
    cin >> t;
    for (int i = 1; i < t + 1; i++)
    {
        solve(i);
    }
    return 0;
}