#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
vector<vector<int>> dp;
int sol(vector<int> &s, unordered_map<int, vector<int>> &k, int i, int j)
{
    if (i == s.size() - 1)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (s[i + 1] == s[i])
        return dp[i][j] = sol(s, k, i + 1, j);
    int a = -1, b = -1, c = INT_MAX, d = INT_MAX;
    for (auto x : k[s[i + 1]])
    {
        if (x > j)
        {
            if (x - j < c)
            {
                a = x;
                c = x - j;
            }
        }
        else
        {
            if (j - x < d)
            {
                b = x;
                d = j - x;
            }
        }
    }

    if (a != -1 && b != -1)
        return dp[i][j] = min(abs(j - a) + sol(s, k, i + 1, a), abs(b - j) + sol(s, k, i + 1, b));
    else if (a != -1)
        return dp[i][j] = abs(j - a) + sol(s, k, i + 1, a);
    else if (b != -1)
        return dp[i][j] = abs(b - j) + sol(s, k, i + 1, b);
}
void solve(int test)
{
    cout << "Case #" << test << ": ";
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    int m;
    cin >> m;
    unordered_map<int, vector<int>> k;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        k[x].push_back(i);
    }
    dp = vector<vector<int>>(n, vector<int>(m, -1));
    int ans = INT_MAX;
    for (auto i : k[s[0]])
    {
        ans = min(ans, sol(s, k, 0, i));
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