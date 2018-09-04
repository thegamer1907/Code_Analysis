#include <bits/stdc++.h>
#define for0(i, n) for(int i = 0; i < n; i++)
#define for1(i, n) for(int i = 1; i <= n; i++)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define V vector<int>
#define VP vector<pair<int, int> >
#define clr(A, x) memset(A, x, sizeof(A))
#define cpy(A, B) memcpy(A, B, sizeof(B))
#define g(s) getline(cin, s) ///ai grija la fin/cin ///
#define FASTIO ios_base::sync_with_stdio(0)
const long long INFLL = (1LL<<62);
const int INFINT = 2000000000;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
//ifstream fin("A-large-practice.in");
//ofstream fout("A-large-practice.out");

const int NMAX = 1e3 + 5;
const int MOD = 1e9 + 7;

string st;
ll b, s, c;
ll nb, ns, nc;
ll pb, ps, pc;
ll money;

bool verif(ll x)
{
    ll suma = 0;
    ll cb = b * x - nb;
    suma += max(0LL, cb * pb);
    suma += max(0LL, (s * x - ns) * ps);
    suma += max(0LL, (c * x - nc) * pc);

    return suma <= money;
}

int main()
{
    FASTIO;
    cin >> st;
    for(auto i: st)
    {
        switch(i)
        {
        case 'B':
            b++;
            break;
        case 'S':
            s++;
            break;
        default:
            c++;
        }
    }
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> money;

    ll l = 0, r = (ll)1e12;

    while(r - l > 1)
    {
      //  cout << r << endl;
        ll m = (l + r) / 2;
        if(!verif(m))
            r = m;
        else l = m;
    }

    while(!verif(r))
        r--;
    while(verif(r + 1))
        r++;
    cout << r;

    return 0;
}
