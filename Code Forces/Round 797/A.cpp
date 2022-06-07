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
    n = n - 6;
    int a = 3 + n / 3, b = 2 + n / 3, c = 1 + n / 3;

    if (n % 3 == 1)
        a++;
    else if (n % 3 == 2)
        a++, b++;
    cout << b << " " << a << " " << c << endl;
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