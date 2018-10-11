/*input
1 1
a
a
*/

#include <bits/stdc++.h>
 
using namespace std;
 
#define M               100005
#define Fi              first
#define Se              second
#define S(n)            cin >> n
#define P(n)            cout << n
#define mp              make_pair
#define pb              push_back
#define pp              pop_back
#define pf              pop_front
#define sp              cout << " "
#define nl              cout << "\n"
#define MIN(con)        (*min_element(ALL(con))) 
#define MAX(con)        (*max_element(ALL(con)))
#define mem(n, a)       memset((n), (a), sizeof(n))
#define ALL(cont)       (cont).begin(),(cont).end()
#define NX(cont)        next_permutation(ALL(cont))
#define PX(cont)        prev_permutation(ALL(cont))
#define F(i, n, r)      for(int i = (n); i < (r); i ++)
#define prec(n)         cout << fixed << setprecision(n)
#define PI              3.14159265358979323846264338327951
#define fast            ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FH(it,c)   for(__typeof((c).begin()) it = (c).begin(); it != (c).end(); ++ it)
 
using ll = long long;
using ss = stringstream;
using ul = unsigned long long;
 
typedef set < int >         st;
typedef vector < ll >       vl;
typedef vector < int >      vi;
typedef map < int, int >    mint;
typedef pair <int, int>     pr;
typedef vector < string >   vs;
typedef map < string, ll >  ms;
typedef map < string, int > mi;
typedef vector < pr >       vp;
 
template < typename T > inline T LCM(T a, T b)            { return (a * b) / GCD(a, b); }
template < typename T > inline T GCD(T a, T b)            { ll t; while(a) { t = a; a = b % a; b = t; } return b; }
template < typename T > inline T _max(T a, T b, T c)      { return max( max( a, b ), c ); }
template < typename T > inline T _min(T a, T b, T c)      { return min( min( a, b ), c ); }
template < typename T > inline string toString(T a)       {return to_string(a); }  // Convert int to string
template < typename T > inline void toInt(string s, T &x) { ss str(s); str >> x;}  // Convert string to int

inline void lower(string &s) { 
  FH(it,s) 
    *it = tolower(*it); 
} 
 
inline void upper(string &s) { 
  FH(it,s) 
    *it = toupper(*it); 
}

const ll inf    =  999999999999999999;

bool palin(string s)
{
    string s1 = s;
    reverse(s.begin(), s.end());
    return (s == s1);
} 

ll triangle(ll n)
{
    return (n * (n + 1)) / 2;
}

bool check(ll n) 
{
    if(n == 1) {
        return 0;
    }
    if(n == 2 or n == 3) {
        return 1;
    }
    if(n % 2 == 0 or n % 3 == 0) {
        return 0;
    }
    for(ll i = 5; i * i <= n; i += 6) {
        if(n % i == 0 or n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main ()
{
    fast;
    int n, m;
    cin >> n >> m;

    set < string > s;

    F(i, 0, n + m) {
        string s1;
        cin >> s1;
        s.insert(s1);
    }

    int x = n + m - int(s.size());

    m -= (x % 2);
    if(n > m) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
    nl;    
    return 0;
}
