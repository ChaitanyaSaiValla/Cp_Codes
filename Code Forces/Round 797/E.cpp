#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

void solve()
{
    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i] / k;
        a[i] %= k;
    }
    sort(a.begin(), a.end());
    int j = n - 1;
    for (int i = 0; i < j; i++)
    {
        if (a[i] + a[j] >= k)
        {
            ans++;
            j--;
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