#include<bits/stdc++.h>
#include <functional>                                                                          

using namespace std;
#define ll long long 
#define Rep(i, n) for(__typeof(n) i = 0; i < (n); i++)
#define rrep(i, n) for(__typeof(n) i = (n) - 1; i >= 0; --i)
#define rep1(i, n) for(__typeof(n) i = 1; i <= (n); i++)
#define FOR(i, a, b) for(__typeof(b) i = (a); i <= (b); i++)
#define forstl(i, s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define SIZE(v) ((int)v.size())
#define INF (1 << 30)
#define PI acos(-1.0)
#define bitcnt __builtin_popcount
#define pp push_back
#define ppb pop_back
#define all(x) x.begin(), x.end()
#define mem(x, y) memset(x, y, sizeof x)
#define eps 1e-9
#define couple make_pair
#define X first
#define Y second
#define vi vector<int>
#define vpii vector< pii >
#define si set<int>
#define SDi(x) sf("%d", &x)
#define SD2(x, y) sf("%d %d", &x, &y)
#define SD3(x, y, z) sf("%d %d %d", &x, &y, &z)
#define SDs(x) sf("%s", x)
#define pf printf
#define print(x) pf("%d ", x)
#define println(x) pf("%d\n", x)
#define output(x, y); pf("Case %d: %d", ++x, y)
#define newLine pf("\n")
#define sf scanf
#define SDl(x) sf(LLD, &x)
#define MAX5 100000
#define MAX7 10
#define MAX9 1000000
#define MOD 1000000000
#define Cin cin
#define Cout cout
#define For for
#define Int int 
#define String string
#define Vector vector
#define Return return 
#define While while
#define If if
#define Else else
#define Ll long long
#define I i 
#define A a
#define Sort sort
#define Break break
#define SQR(a) ((a)*(a))
String l;
int main()
{
ll n,k;
Cin>>n>>k;
map<string,int >s;
rep1(i,n)
{
Cin>>l;
s[l]++;
}
Int c=0;
rep1(i,k)
{
Cin>>l;
If(s.count(l)) c++;
}
If(c&1) n++;
If(n>k) cout<<"YES";
Else cout<<"NO";
Return 0;
}