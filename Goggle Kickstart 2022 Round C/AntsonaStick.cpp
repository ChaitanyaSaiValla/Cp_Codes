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
    int n, l;
    cin >> n >> l;
    vector<int> p(n + 1), d(n + 1), tt(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i] >> d[i];
    }
    vector<pair<int, int>> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++)
    {
        a[i] = {p[i], i};
        if (d[i])
            tt[i] = l - p[i];
        else
            tt[i] = p[i];

        b[i] = {tt[i], i};
    }
    vector<int> ans;
    int i = 1, j = n;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int k = 1; k <= n; k++)
    {
        int s = k + 1;
        while (s <= n && b[k].first == b[s].first)
            s++;
        vector<int> c;
        for (int x = k; x <= s - 1; x++)
        {
            if (d[b[x].second])
            {
                c.push_back(a[j].second);
                j--;
            }
            else
            {
                c.push_back(a[i].second);
                i++;
            }
        }
        sort(c.begin(), c.end());
        for (auto y : c)
            ans.push_back(y);
        k = s - 1;
    }
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
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