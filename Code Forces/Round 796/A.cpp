#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

void solve()
{
    int x;
    cin >> x;
    int a = 0, ans = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((x >> i) & 1 && a == 0)
        {
            ans |= (1 << i);
            a++;
        }
        else if ((x >> i) & 1)
        {
            a++;
            break;
        }
    }
    if (a == 1)
    {
        if (ans == 1)
            ans = 3;
        else
            ans = ans + 1;
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