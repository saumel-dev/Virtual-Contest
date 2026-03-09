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
    int a, b; cin >> a >> b;
    if(b < 2) { cout << 0 << endl; return; }
    else
    {
        int ans = 0;
        while(a >= 1 && b >= 2)
        {
            a--;
            b -= 2;
            ans += 3;
        }
        cout << ans << endl;
    }
    
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