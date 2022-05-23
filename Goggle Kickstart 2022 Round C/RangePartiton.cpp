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
    int n, x, y;
    cin >> n >> x >> y;
    int sum = n * (n + 1) / 2;
    int sum1 = (sum * x) / (x + y);
    if ((sum * x) % (x + y) != 0)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    else
    {
        cout << "POSSIBLE" << endl;
        vector<int> ans;
        for (int i = n; i > 0; i--)
        {
            if (i <= sum1)
            {
                ans.push_back(i);
                sum1 -= i;
            }
        }
        cout << ans.size() << endl;
        for (auto j : ans)
            cout << j << " ";
        cout << endl;
    }
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