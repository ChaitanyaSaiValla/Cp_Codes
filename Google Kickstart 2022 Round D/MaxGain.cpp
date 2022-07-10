#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
int subs(vector<int> &a, int k)
{
    if (k == 0)
        return 0;
    int x = 0;
    for (int i = 0; i < k; i++)
        x += a[i];
    int c = x;
    for (int i = k; i < a.size(); i++)
    {
        c += a[i] - a[i - k];
        x = min(c, x);
    }
    return x;
}
void solve(int test)
{
    cout << "Case #" << test << ": ";
    int n, suma = 0, sumb = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        suma += a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        sumb += b[i];
    }
    int k;
    cin >> k;
    int ans = 0;
    for (int i = 0; i <= n + m - k; i++)
    {
        if (i > n || (n + m - k - i > m))
            continue;
        int x = subs(a, i);
        int y = subs(b, n + m - k - i);
        ans = max(ans, suma + sumb - x - y);
    }
    cout << ans << endl;
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