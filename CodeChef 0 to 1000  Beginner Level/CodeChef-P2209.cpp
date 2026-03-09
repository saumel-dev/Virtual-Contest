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
    int x, y; cin >> x >> y;
    vector<int> v;
    for(int i = x; i <= y; i++)
    {
        if(i % x == 0) v.push_back(i);
    }
    int odd = 0, even = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] % 2 == 0) even += v[i];
        else odd += v[i];
    }
    if(even >= odd) yes;
    else no;
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