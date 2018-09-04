#include <bits/stdc++.h>
using namespace std;

#define  FOR(i,a,b) for(auto i = (a);i!=(b);i++)
#define RFOR(i,a,b) for(auto i = (a);i!=(b);i--)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define endl "\n"
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long long lint;

#define forn(i,n) for(lint i = 0; i < (lint)(n); ++i)
#define for1(i,n) for(lint i = 1; i <= (lint)(n); ++i)
#define forlr(i,l,r) for(lint i = (lint)(l); i <= (lint)(r); ++i)
#define ford(i,n) for(lint i = (lint)(n)-1; i >= 0; --i)

#define debarr(a,n) for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debmat(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__)
template <class T> void dbs(string str, T t) {cerr << str << " : " << t << "\n";}
template <class T, class... S> void dbs(string str, T t, S... s) {int idx = str.find(','); cerr << str.substr(0, idx) << " : " << t << ", "; dbs(str.substr(idx + 1), s...);}
template <class S, class T>ostream& operator <<(ostream& os, const pair<S, T>& p) {return os << "(" << p.first << ", " << p.second << ")";}
template <class T>ostream& operator <<(ostream& os, const vector<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T> void prc(T a, T b) {cerr << "["; for (T i = a; i != b; ++i) {if (i != a) cerr << ", "; cerr << *i;} cerr << "]\n";}
// Use pr(a,b,c,d,e) or cerr<<anything or prc(v.begin(),v.end()) or prc(v,v+n)

void code()
{
    lint n, m, k;
    cin>>n>>m>>k;
    lint small = 1, large = n*m;
    while(small<large)
    {
        lint x = small + (large-small+1)/2;
        lint count = 0;
        for1(i,n)
            count+=min((x-1)/i,m);
        if(count<k)
            small = x;
        else
            large = x-1;
    }
    cout<<small;
}
int main()
{
//    freopen("X.in","r",stdin);
//    freopen("X.out","w",stdout);
    int t = 1;
//    cin>>t; //Comment if t=1
    FOR(i,1,t+1)
    {
//        cout<<"Case #"<<i<<": ";
        code();
    }
    return 0;
}