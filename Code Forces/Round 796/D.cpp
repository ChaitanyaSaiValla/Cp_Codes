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
    vector<int> cum(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> cum[i];
        cum[i] += cum[i - 1];
    }
    if (k < n)
    {
        int m = cum[k];
        for (int i = k + 1; i <= n; i++)
        {
            m = max(m, cum[i] - cum[i - k]);
        }
        cout << m + (k * (k - 1) / 2) << endl;
    }
    else
    {
        cout << cum[n] + (k * (k - 1) / 2) - ((k - n) * (k - n - 1) / 2) << endl;
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