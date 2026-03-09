#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long ll;
typedef double dl;

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl
#define mem(a,b) memset(a, b, sizeof(a))
#define check cout << "-__________________-" << endl


void solve()
{
    int n;
    cin >> n;
    int pos = n, j = n - 1;
    int ans = 0;
    for(int i = 1; i <= n - 1; i++)
    {
        if(i % 2 != 0)
        {
            ans = pos - j;
            j--;
            pos = ans;
        }
        else
        {
            ans = pos + j;
            j--;
            pos = ans;
        }
    }
    cout << ans << endl;
}
int main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}