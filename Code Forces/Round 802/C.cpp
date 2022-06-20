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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        c += abs(a[i + 1] - a[i]);
        if (a[i] > a[i + 1])
            a[0] += (a[i + 1] - a[i]);
    }
    c += abs(a[0]);
    cout << c << endl;
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