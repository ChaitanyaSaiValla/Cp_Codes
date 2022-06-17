#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

void solve()
{
    int a, b;
    cin >> a >> b;
    string s = "";
    while (a != 0 && b != 0)
    {
        s += "0";
        a--;
        s += "1";
        b--;
    }
    while (a != 0)
    {
        s += "0";
        a--;
    }
    while (b != 0)
    {
        s += "1";
        b--;
    }
    cout << s << endl;
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