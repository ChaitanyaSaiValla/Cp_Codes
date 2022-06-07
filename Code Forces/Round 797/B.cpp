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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] > a[i])
            ans = false;
    }
    if (!ans)
    {
        cout << "NO" << endl;
        return;
    }
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        k = max(k, a[i] - b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] - k;
        if (a[i] < 0)
            a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            ans = false;
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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