#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define pb push_back
#define mp make_pair
#define pf printf
#define sf scanf
#define mem(n,i) memset((n),i,sizeof (n))
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<vector<ll> > vvll;
typedef vector<vector<pll> > vvp;
typedef map<int,int> mi;
typedef map<ll,ll> mll;
typedef map< string , ll> ms;
typedef queue<ll> qll;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    ll h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    ll a, b, c;
    ll clock[3];

    a = (h % 12) * 60 * 60 * 5 + m * 60 * 5 + s * 5;
    b = (m)* 60 * 60 + s * 60;
    c = (s)* 60 * 60;
    clock[0] = a;
    clock[1] = b;
    clock[2] = c;
    sort(clock, clock + 3);
    a = clock[0];
    b = clock[1];
    c = clock[2];
    int d, e;
    d = (t1 % 12) * 60 * 5 * 60;
    e = (t2 % 12) * 60 * 60 * 5;
    //cout << a << " " << b << " " << c << " " << d << " " << e << endl;
    if (d> a && d < b && e > a && e < b)
    {
        cout << "YES" << endl;
        return 0;
    }
    else if (d > b && d < c && e > b && e < c)
    {
        cout << "YES" << endl;
        return 0;
    }
    else
    {
        if (d < a)
        {
            d = d + 60 * 60 * 60;
        }

        if (e < a)
        {
            //cout << a << " " << t2 << endl;
            e = e + 60 * 60 * 60;
        }

        a = a + 60 * 60 * 60;

        if (d > c && d < a && e > c && e < a)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;


#ifndef ONLINE_JUDGE
    cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
#endif
}
