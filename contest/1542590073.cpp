#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int ll
typedef double ld;
typedef unsigned long long ull;
typedef pair < int, int > pii;
typedef vector < int > vi;
typedef vector < pii > vii;
typedef map < int, int > mii;
typedef map < int , bool > mib;

const int mod = 1e9+7;
const int inf = 5*1e18;
const ld pi = acos(-1);
const ld eps = 0.000001;
const int N = 2*1e5 +1;
const int M = 2e6 +1;

#define iosbase ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define float_write(a) cout.precision(a); cout<<fixed;
#define files_in(x) freopen(x ".in", "r", stdin); freopen(x ".out", "w", stdout);
#define files_dat(x) freopen(x ".dat", "r", stdin); freopen(x ".sol", "w", stdout);
#define files_txt(x) freopen(x ".txt", "r", stdin); freopen(x ".txt", "w", stdout);
#define filestxt freopen("output.txt", "w", stdout); freopen("input.txt", "r", stdin);
#define slater(x) (x>='a'&&x<='z')
#define blater(x) (x>='A'&&x<='Z')
#define number(x) (x>='0'&&x<='9')
#define ms(x, y) memset(x, y, sizeof(x));
#define all(a) a.begin(),a.end()
#define ppb pop_back
#define pb push_back
#define mp make_pair
#define y1 ihatethis
#define sz size()
#define s second
#define f first

template < typename type >

inline type sqr(type value)
{
    return (value * value);
}

template < typename type >

inline type cube(type value)
{
    return (value * value * value);
}

int h,m,s,t1,t2,sch,schBeg;
bool used;

main()
{
    cin >> h >> m >> s >> t1 >> t2;

    h %= 12;
    h = h*5;

    t1 %= 12;
    t1 *= 5;

    t2 %= 12;
    t2 *= 5;

    for(int i = 0; i < 60; i++)
    {
        if(i == t1 || i == t2)
        {
            if(used)
            {
                if(sch-schBeg == 3 || sch - schBeg== 0)
                {
                    cout << "YES";
                }else
                {
                    cout << "NO";
                }

                return 0;
            }else
            {
                used = 1;
            }
        }

        if(i == h) sch++, schBeg += 1 - used;
        if(i == m) sch++, schBeg += 1 - used;
        if(i == s) sch++, schBeg += 1 - used;
    }
}
