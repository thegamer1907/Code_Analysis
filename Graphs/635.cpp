#include<bits/stdc++.h>
using namespace std;
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define A first
#define B second
#define make_pair MP
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
const int INF = 1<<29;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long ll;
inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n>>b)&1; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n) { int res = 0; while(n && ++res) n-=n&(-n); return res; }
template<class T> void chmax(T & a, const T & b) { a = max(a, b); }
template<class T> void chmin(T & a, const T & b) { a = min(a, b); }
int main()
{
    int n,t;
    cin>>n>>t;
    string li;
    cin>>li;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<li.length()-1;j++)
        {
            if(li[j]=='B' && li[j+1]=='G')
            {
                li[j+1]='B';
                li[j]='G';
                j++;
            }
        }
    }
    cout<<li;
}
