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
    cin >> n >> k;
    string s;
    cin >> s;
    int ans, w = 0;
    for (int i = 0; i < s.length() - k + 1; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < k; j++)
            {
                if (s[j] == 'W')
                    w++;
            }
            ans = w;
        }
        else
        {
            if (s[i - 1] == 'W')
                w--;
            if (s[i + k - 1] == 'W')
                w++;
            ans = min(ans, w);
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