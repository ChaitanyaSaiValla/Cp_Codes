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
    vector<int> s(n), f(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
        cout << f[i] - ((i == 0) ? s[0] : max(s[i], f[i - 1])) << " ";
    }
    cout << endl;
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