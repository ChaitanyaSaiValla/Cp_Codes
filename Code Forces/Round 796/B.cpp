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
    int o = 0, e = 0, c = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 != 0)
        {
            o++;
        }
        else
        {
            e++;
            int cn = 0;
            while (x % 2 == 0)
            {
                cn++;
                x /= 2;
            }
            c = min(c, cn);
        }
    }
    if (o)
    {
        cout << e << endl;
    }
    else
    {
        cout << c + n - 1 << endl;
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