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
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        int innocents = 0;
        queue<int> q;
        q.push(i);
        set<int> temp;
        temp.insert(i);
        while (!q.empty() && innocents <= k)
        {
            int c = q.front();
            q.pop();
            if (vis[c])
                continue;
            vis[c] = 1;
            innocents++;
            temp.insert(c);
            for (auto j : adj[c])
            {
                if (vis[j])
                {
                    continue;
                }
                q.push(j);
            }
        }
        if (innocents > k)
            ans++;
        for (auto &x : temp)
        {
            vis[x] = 0;
        }
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