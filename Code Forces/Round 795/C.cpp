#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int l = INT_MIN, r;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (l == INT_MIN)
                l = i;
            r = i;
        }
    }
    if (l == INT_MIN)
    {
        cout << ans << endl;
        return;
    }
    if (l == r)
    {
        if ((n - 1 - r) <= k)
            ans = 1;
        else if (l <= k)
            ans = 10;
        else
            ans = 11;
    }
    else
    {
        if ((n - 1 - r) <= k)
        {
            swap(s[n - 1], s[r]);
            k -= (n - 1 - r);
        }
        if (l <= k)
        {
            swap(s[l], s[0]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            ans += (10 * (s[i] - '0')) + (s[i + 1] - '0');
        }
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