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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += a[i];
        b[i] = a[i] - (n - 1 - i);
    }
    sort(b.rbegin(), b.rend());
    for (int i = 0; i < k; i++)
    {
        total -= b[i];
    }
    total -= k * (k - 1) / 2;
    cout << total << endl;
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