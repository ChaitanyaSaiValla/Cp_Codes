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
    string a;
    cin >> n >> a;
    if (a[0] != '9')
    {
        for (int i = 0; i < a.size(); i++)
            cout << '9' - a[i];
        cout << endl;
    }
    else
    {
        string ans = "";
        int c = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int x = (a[i] - '0') + c;
            if (x > 1)
            {
                ans += (11 - x) + '0';
                c = 1;
            }
            else
            {
                ans += (1 - x) + '0';
                c = 0;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
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