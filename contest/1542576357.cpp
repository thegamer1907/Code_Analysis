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

//int NEXT_FREE_INDEX, L[3200009],R[3200009],s[3200009],ir,root[100009];  // ir is initial root, if ir=0, set NEXT_FREE_INDEX=1

VI vec[100009];

LL n;

int qry(int l,int r,int val)
{
    if(l>r || vec[val].empty())return 0;
    return lower_bound(vec[val].begin(),vec[val].end(),r+1)-lower_bound(vec[val].begin(),vec[val].end(),l);
}

LL  k, dp[23][100009],arr[100009],pos[100009];
LL glob;
LL cnt[100009],lst[100009];

void compute(int i, int L, int R, int optL, int optR) {
    if (L > R) return ;
    glob++;
    int mid = (L + R) >> 1, savek = optL;
    dp[i][mid] = INF;
    LL now=0,x;
    PER(k,min(mid-1,optR),optL) {
        x=arr[k+1];
        if(lst[x]!=glob)
        {
            lst[x]=glob;
            cnt[x]=0;
        }
        else
        {
            cnt[x]++;
        }
        now+=cnt[x]+qry(optR+2,mid,x);
        LL cur = dp[i-1][k] + now;
        if (cur < dp[i][mid]) {
            dp[i][mid] = cur;
            pos[mid]=k;
            savek = k;
        }
    }
    compute(i, L, mid-1, optL, savek);
    compute(i, mid+1, R, savek, optR);
}

int main()
{
    //freopen("input_file_name.in","r",stdin);
    //freopen("output_file_name.out","w",stdout);
    scanf("%lld %lld",&n,&k);
    REP(i,1,n){scanf("%lld",&arr[i]);vec[arr[i]].PB(i);}
//    NEXT_FREE_INDEX=1;
//    root[0]=0;
//    REP(i,1,n)
//    {
//        root[i]=upd(arr[i],1,root[i-1]);
//    }
    dp[0][0] = 0;
    REP(i,1,n) dp[0][i] = INF;

    REP(i,1,k) {
        compute(i, 1, n, 0, n);
        LL ptr1=1,ptr2=0,now=0;
        MEM(cnt,0);
        REP(j,1,n)
        {
            while(ptr2<j)
            {
                ptr2++;
                now+=cnt[arr[ptr2]];
                cnt[arr[ptr2]]++;
            }
            while(ptr1<pos[j]+1)
            {
                cnt[arr[ptr1]]--;
                now-=cnt[arr[ptr1]];
                ptr1++;
            }
            dp[i][j]=dp[i-1][pos[j]]+now;
        }
    }
    print(dp[k][n]);
    return 0;
}

