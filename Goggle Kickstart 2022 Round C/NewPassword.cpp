#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

void solve(int test)
{
    cout << "Case #" << test << ": ";
    int n;
    string s;
    cin >> n >> s;
    bool sp = false, cap = false, sma = false, dig = false;
    for (auto i : s)
    {
        if (i == '#' || i == '@' || i == '*' || i == '&')
            sp = true;
        else if (i >= 'A' && i <= 'Z')
            cap = true;
        else if (i >= 'a' && i <= 'z')
            sma = true;
        else if (i >= '0' && i <= '9')
            dig = true;
    }
    if (!sp)
        s += "#";
    if (!cap)
        s += "A";
    if (!sma)
        s += "a";
    if (!dig)
        s += "1";

    while (s.length() < 7)
    {
        s += "a";
    }
    cout << s << endl;
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