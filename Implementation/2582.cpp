#include<bits/stdc++.h>

using namespace std;


#include <ext/rope>
using namespace __gnu_cxx;


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;


#define int long long

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<PII> VPI;
typedef vector<VI> VVI;
typedef map<string, int> MAPS;
typedef map<char, int> MAPC;
typedef map<int, int> MAPI;
typedef set<int> SETI;
typedef set<string> SETS;
typedef set<char> SETC;
typedef complex<double> POINT;


#define add push_back
#define rem pop_back
#define ALL(x) x.begin(), x.end()
#define SORT(x) sort(ALL(x))
#define SZ(x) int((x).size())
#define F first
#define S second
#define NEW(x, y, z) x y; x::iterator z;


void INPUT(int *a, int size)  { for(int i = 0; i < size; ++i) cin >> a[i]; }
void OUTPUT(int *a, int size) { for(int i = 0; i < size; ++i) cout << a[i] << " "; cout << endl;}


#define REPI(it, x) for(__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define REP(i, a, b)  for(int i = a; i <  b; i++)
#define REPN(i, a, b) for(int i = a; i <= b; i++)
#define REPV(i, b, a) for(int i = b - 1; i >= a; i--)


const double EPS = 1e-9;
const double PI = acos(-1.);
const int MOD = 1e9 + 7;
const int MAXN = 300001;
int INF = __INT64_MAX__;
int MAX = -1e16;
int MIN = 1e16;
string YN[] = {"NO", "YES"};


#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*((b)/gcd(a,b)))


template<typename T1, typename T2> T2 max(T1 a, T2 b) { T2 res = a > b ? a : b; return res; }
template<typename T1, typename T2> T2 min(T1 a, T2 b) { T2 res = a < b ? a : b; return res; }


int POW (int a, int n)
{
        int res = 1;
        while (n) {
                if (n & 1)
                        res *= a;
                a *= a;
                n >>= 1;
        }
        return res;
}


string to_string(int n)
{
        stringstream ss;
        string s;
        ss << n;
        ss >> s;
        return s;
}


string to_binary(int n)
{
        string s;
        while(n) {
                s += n & 1 + '0';
                n >>= 1;
        }
        reverse(ALL(s));
        return s;
}



int px[] = { 1, 1, -1, -1 };
int py[] = { -1, 1, -1, 1};
int dx[] = { 1, 0, -1, 0, 1, 1, -1, -1 };
int dy[] = { 0, 1, 0, -1, 1, -1, 1, -1 };
int fx[] = {-2, -2, -1, -1,  1,  1,  2,  2};
int fy[] = {-1,  1, -2,  2, -2,  2, -1,  1};


bool isPrime(int n)
{
          if (n <= 1)  return false;
          if (n <= 3)  return true;

          if (n%2 == 0 | n%3 == 0) return false;

          for (int i=5; i*i<=n; i=i+6)
                    if (n%i == 0 || n%(i+2) == 0)
                              return false;
          return true;
}
int x, cnt, n, m, A[MAXN];
void solution()
{
		cin >> n >> m;
		REPN(i, 1, n){
			cin >> A[i];
			if(A[i] <= m) cnt++;
			else cnt += 2;
		}
		cout << cnt;
}


__INT16_C() main()
{
        //ifstream fin("input.in");
        //ofstream fout("output.out");

        ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

        int t = 1;
        // cin >> t;

        while(t--) solution();
}
