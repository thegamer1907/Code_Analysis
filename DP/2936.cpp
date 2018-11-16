#include <bits/stdc++.h>
using namespace std;
#define int long long
using ll=long long;
using vi=vector<int>;
using pii=pair<int,int>;
#define ALL(c) begin(c),end(c)
#define RALL(c) rbegin(c),rend(c)
#define ITR(i,b,e) for(auto i=(b);i!=(e);++i)
#define FORE(x,c) for(auto &x:c)
#define REPF(i,a,n) for(int i=a,i##len=(int)(n);i<i##len;++i)
#define REP(i,n) REPF(i,0,n)
#define REPR(i,n) for(int i=(int)(n);i>=0;--i)
#define SZ(c) ((int)c.size())
#define CONTAIN(c,x) (c.find(x)!=end(c))
#define OUTOFRANGE(y,x,h,w) (y<0||x<0||y>=h||x>=w)
#define dump(...)
const int DX[9]={0,1,0,-1,1,1,-1,-1,0},DY[9]={-1,0,1,0,-1,1,1,-1,0};
#define INF (1001001001)
#define INFLL (1001001001001001001ll)
template<class T> ostream& operator << (ostream &os,const vector<T> &v) {
    ITR(i,begin(v),end(v)) os<<*i<<(i==end(v)-1?"":" "); return os; }
template<class T> istream& operator >> (istream &is,vector<T> &v) {
    ITR(i,begin(v),end(v)) is>>*i; return is; }
template<class T> istream& operator >> (istream &is, pair<T,T> &p) {
    is>>p.first>>p.second; return is; }
template <class T> bool chmax(T &a,const T &b) {if(a<b) {a=b;return 1;} return 0;}
template <class T> bool chmin(T &a,const T &b) {if(b<a) {a=b;return 1;} return 0;}
template <class T> using heap = priority_queue<T,vector<T>,greater<T>>;
struct before_main_function {
    before_main_function() {
        #ifdef int
            #undef INF
            #define INF INFLL
            #define stoi stoll
        #endif
        cin.tie(0);ios::sync_with_stdio(false);
        cout<<setprecision(15)<<fixed;
        #define endl "\n"
    }
} before_main_function;
//------------------8<------------------------------------8<--------------------

signed main() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n),b(k);
    cin>>a>>b;
    sort(RALL(b));
    int idx=0;
    REP(i,n) {
        if(a[i]==0) {
            a[i]=b[idx++];
        }
    }
    REPF(i,1,n) {
        if(a[i-1]>a[i]) {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
