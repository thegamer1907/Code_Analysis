#include <bits/stdc++.h>
using namespace std;


#define inf (1<<30)-1
#define INF (1LL<<62)-1
#define MOD 1000000007LL
#define MP make_pair
#define PB push_back
#define ALL(x) x.begin(),x.end()
#define PI acos(-1)
#define MEM(x,y) memset(x,y,sizeof (x))
#define debug cout<<"A"<<'\n'
#define REP(i,a,b) for (int i=(a); i<=(b); i++)
#define PER(i,a,b) for (int i=(a); i>=(b); i--)
#define REPL(i,a,b) for (LL i=(a); i<=(b); i++)
#define PERL(i,a,b) for (LL i=(a); i>=(b); i--)
#define print(x) cout<<x<<'\n'
#define itrALL(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
#define UNIQUE(X) X.erase( unique( X.begin(), X.end() ), X.end() )


typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int>PII;
typedef pair<LL,LL>PLL;
typedef vector<int> VI;
typedef vector<LL> VL;


template <class T> inline T bigmod(T p,T e,T M)
{
    T ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}

template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}
template <class T, class X> inline bool getbit(T a, X i) { T t=1; return ((a&(t<<i))>0);}
template <class T, class X> inline T setbit(T a, X i) { T t=1;return (a|(t<<i)); }
template <class T, class X> inline T resetbit(T a, X i) { T t=1;return (a&(~(t<<i)));}

/*end of header*/

int n,k,cnt[(1<<4)],arr[4];

int main()
{
    //freopen("input_file_name.in","r",stdin);
    //freopen("output_file_name.out","w",stdout);
    scanf("%d %d",&n,&k);
    REP(i,1,n)
    {
        int now=0;
        REP(j,0,k-1)
        {
            scanf("%d",&arr[j]);
            if(arr[j])now=setbit(now,j);
        }
        if(__builtin_popcount(now)==k)continue;
        cnt[now]++;
    }
    if(cnt[0])
    {
        print("YES");
        return 0;
    }
    REP(i,1,(1<<k)-1)
    {
        REP(j,i+1,(1<<k)-1)
        {
            if(cnt[i]>0 && cnt[j]>0 && (i&j)==0)
            {
                print("YES");
                return 0;
            }
        }
    }
    print("NO");
    return 0;
}

