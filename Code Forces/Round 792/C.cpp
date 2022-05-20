#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    int x = 0, flag = 1;
    while (x < n && is_sorted(a[x].begin(), a[x].end()))
        x++;
    if (x == n)
    {
        cout << "1 1" << endl;
        flag = 0;
        return;
    }
    auto b = a[x];
    vector<int> p;
    sort(b.begin(), b.end());
    for (int i = 0; i < m; i++)
    {
        if (a[x][i] != b[i])
        {
            p.push_back(i);
        }
    }
    if (p.size() > 2)
    {
        cout << "-1" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        swap(a[i][p[0]], a[i][p[1]]);
        if (!(is_sorted(a[i].begin(), a[i].end())))
        {
            cout << "-1" << endl;
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << p[0] + 1 << " " << p[1] + 1 << endl;
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