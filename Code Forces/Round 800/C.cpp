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
    {
        cin >> a[i];
        if (i > 0)
            a[i] += a[i - 1];
    }
    if (n == 1)
    {
        if (a[0] == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else if (a[n - 1] != 0)
        cout << "NO" << endl;
    else
    {
        bool x = true;
        for (auto i : a)
        {
            if (i < 0)
                x = false;
        }
        int i = 0;
        while (a[i] != 0)
        {
            i++;
        }
        for (; i < n; i++)
        {
            if (a[i] != 0)
                x = false;
        }
        if (x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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