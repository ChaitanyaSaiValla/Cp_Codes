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
    int x = n, m = INT_MAX;
    while (x > 0)
    {
        int y = x % 10;
        m = min(m, y);
        x /= 10;
    }
    if (n < 100)
        cout << n % 10 << endl;
    else
    {
        cout << m << endl;
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