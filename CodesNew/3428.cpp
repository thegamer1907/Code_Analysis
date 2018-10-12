#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  for(int i=0;i<(n);++i)
#define REPr(i,n) for(int i=(n)-1;i>=0; --i)
#define FORq(i, m, n) for(int i = (m);i <= (n);++i)
#define SCD(n) scanf("%d",&n)
#define SCD2(m,n) scanf("%d%d",&m,&n)
#define SCD3(m,n,k) scanf("%d%d%d",&m,&n,&k)
#define SCLLD(n) scanf("%lld",&n)
#define SCLLD2(m,n) scanf("%lld%lld",&m,&n)
#define SCLLD3(m,n,k) scanf("%lld%lld%lld",&m,&n,&k)
#define PB push_back
#define MP make_pair
#define ARSCD(A,N) REP(i,N){SCD(A[i]);}
#define ARSCD1(A,N) FORq(i,1,N){SCD(A[i]);}
#define VSCD(v,N) REP(i,N){int x; SCD(x); v.PB(x);}
#define VSCLLD(v,N) REP(i,N){long long x; SCLLD(x); v.PB(x);}
#define PRINTD(n) printf("%d\n",n)
#define PRINTLLD(n) printf("%lld\n",n)
#define DEBUG printf("%s\n","debug")
#define fst first
#define snd second
#define SIN(x,S) (S.count(x) != 0)
using namespace std;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector < VI > VVI;
typedef vector<long long> VL;
typedef long long ll;
typedef long long integer;
////////////////////////////////////////////////////////////////////
int main(){
    int n,m;
    SCD2(n,m);
    vector<int> a;
    VSCD(a,n);

    int MX,mn;
    sort(a.begin(),a.end());

    MX = a[a.size() - 1] + m;
    REP(j,m){
        int minin,minv;
        minv = 10000000;
        REP(i,n){
            if (a[i] < minv){
                minin = i;
                minv = a[i];
            }
        }

        a[minin]++;
    }

    int minv;
    minv = 0;

    REP(i,n){
        minv = max(minv,a[i]);
    }

    mn = minv;

    printf("%d %d\n",mn,MX);
    return 0;
}