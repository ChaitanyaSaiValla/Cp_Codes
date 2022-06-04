#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

void solve()
{
    int n;
    cin >> n;
    unordered_map<char, int> m;
    char ans;
    for (int i = 0; i < 2 * n + 1; i++)
    {
        string x;
        cin >> x;
        for (auto c : x)
            m[c]++;
    }
    for (auto i : m)
    {
        if (i.second % 2 == 1)
            ans = i.first;
    }
    cout << ans << endl;
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