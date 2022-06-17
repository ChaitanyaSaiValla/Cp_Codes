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
    string s;
    cin >> n >> s;
    int count = n;
    for (int j = 1; j < n; j++)
        if (s[j] != s[j - 1])
            count += j;
    cout << count << endl;
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