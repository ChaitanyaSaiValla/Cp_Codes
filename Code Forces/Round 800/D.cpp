#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
int ans;
const int N = 2e6;
vector<int> l(N), r(N);
vector<int> adj[N];
int dfs(int s)
{
    int sum = 0;
    for (int x : adj[s])
        sum += dfs(x);
    if (sum < l[s])
    {
        ans++;
        return r[s];
    }
    return min(sum, r[s]);
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        adj[x].push_back(i);
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> l[i] >> r[i];
    }
    ans = 0;
    dfs(1);
    cout << ans << endl;
    for (int i = 1; i <= n; ++i)
    {
        adj[i].clear();
    }
}

int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}