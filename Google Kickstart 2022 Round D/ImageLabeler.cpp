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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0, i = n - 1;
    while (m > 1)
    {
        ans += a[i];
        i--;
        m--;
    }
    double median = 0;
    if ((i + 1) % 2 == 1)
        median = (double)a[i / 2];
    else
        median = (double)(a[i / 2] + a[(i / 2) + 1]) / 2;
    cout << fixed << setprecision(1) << ans + median << endl;
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