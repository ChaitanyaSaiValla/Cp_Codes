#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
void permutate(int p, int q, vector<int> &output)
{
    if ((q - p) & 1 != 0)
    {
        for (int i = p; i < q; i += 2)
        {
            swap(output[i], output[i + 1]);
        }
    }
    else
    {
        for (int i = p; i < q; i += 2)
        {
            swap(output[i], output[i + 1]);
        }
        swap(output[q], output[q - 1]);
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), output(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        output[i] = i + 1;
    }
    for (int i = 0; i < n - 1; i++)
    {

        int p, q;
        if (a[i] == a[i + 1])
        {
            p = i, q = i + 1;
            while (a[i] == a[q])
            {
                q++;
            }
            q--;
            permutate(p, q, output);
            i = q;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (output[i] == i + 1)
        {
            cout << "-1" << endl;
            return;
        }
    }
    for (auto i : output)
        cout << i << " ";
    cout << endl;
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