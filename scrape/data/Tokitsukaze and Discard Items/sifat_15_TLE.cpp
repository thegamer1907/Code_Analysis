///   |----------------------------|
///   | BISMILLAHIR RAHMANIR RAHIM |
///   |----------------------------|

///       _______  __   ________   ___   .___________.
///      /       ||  | |   ____|  /   \  |           |
///     |   (----'|  | |  |__    /  ^  \ `---|  |----`
///      \   \    |  | |   __|  /  /_\  \    |  |
///  |----)   |   |  | |  |    /  _____  \   |  |
///  |_______/    |__| |__|   /__/     \__\  |__|
///


//#define BitCnt(a) __builtin_popcountll(a)
//template <typename T> T in(){char ch;T n = 0;bool ng = false;while (1){ch = getchar();if (ch == '-'){ng = true;ch = getchar();break;}if (ch>='0' && ch<='9')     break;}while (1){n = n*10 + (ch - '0');ch = getchar();if (ch<'0' || ch>'9')   break;}return (ng?-n:n);}
//template<typename T>inline T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return SQR(POW(B,P/2));}
//template<typename T>inline T Gcd(T a,T b){if(a<0)return Gcd(-a,b);if(b<0)return Gcd(a,-b);return (b==0)?a:Gcd(b,a%b);}
//template<typename T>inline T Lcm(T a,T b) {if(a<0)return Lcm(-a,b);if(b<0)return Lcm(a,-b);return a*(b/Gcd(a,b));}
//long long Bigmod(long long base, long long power, long long MOD){long long ret=1;while(power){if(power & 1)ret=(ret*base)%MOD;base=(base*base)%MOD;power>>=1;}return ret;}
//bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
//long long ModInverse(long long number, long long MOD){return Bigmod(number, MOD-2, MOD);}
//template <typename T> LL isLeft(T a,T b,T c) {return(a.x-b.x)*(b.y-c.y)-(b.x-c.x)*(a.y-b.y);}
//bool isConst(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}
//int toInt(string s)  { int sm; stringstream ss(s); ss>>sm; return sm; }
//#define good   st<=l&&ed>=r
//#define seg    int mid=(l+r)/2,lft=2*id,rgt=lft+1
//#define MX  500007
///**********************************************************//
#include<bits/stdc++.h>
using namespace std;

#define   ff   first
#define   ss   second
#define   pb   push_back
#define   mp   make_pair

#define   SQ(n)         (n*n)
#define   ll            long long
#define   llu           unsigned long long

#define   pi            acos(-1.0)

#define   all(a)        a.begin(),a.end()
#define   _max(a,b,c)   Max(a,Max(b,c))
#define   _min(a,b,c)   Min(a,Min(b,c))

#define   FOR(i,a,b)    for(int i=a;i<b; i++)

#define   MEM(a,val)    memset(a,val,sizeof(a))

#define   sf(a)         scanf("%d",&a)
#define   sf2(a,b)      scanf("%d%d",&a,&b)
#define   sf3(a,b,c)    scanf("%d%d%d",&a,&b,&c)
#define   sf4(a,b,c,d)  scanf("%d%d%d%d",&a,&b,&c,&d)

#define   sfl(a)        scanf("%lld",&a)
#define   sfl2(a,b)     scanf("%lld%lld",&a,&b)
#define   sfl3(a,b,c)   scanf("%lld%lld%lld",&a,&b,&c)
#define   sfl4(a,b,c,d) scanf("%lld%lld%lld%lld",&a,&b,&c,&d)

#define   pnl()         printf("\n")
#define   pfs()         printf(" ")

#define   pfc(a)        printf("Case %d: ",a)
#define   pf(a)         printf("%d",a)
#define   pf2(a,b)      printf("%d %d",a,b)
#define   pf3(a,b,c)    printf("%d %d %d",a,b,c)
#define   pf4(a,b,c,d)  printf("%d %d %d %d",a,b,c,d)

#define   pflc(a)       printf("Case %lld: ",a)
#define   pfl(a)        printf("%lld",a)
#define   pfl2(a,b)     printf("%lld %lld",a,b)
#define   pfl3(a,b,c)   printf("%lld %lld %lld",a,b,c)
#define   pfl4(a,b,c,d) printf("%lld %lld %lld %lld",a,b,c,d)

#define   tover(QLOW, QHIGH, LOW, HIGH)   QLOW<=LOW && QHIGH>= HIGH /// QLOW,QHIGH = Jei Query Ber korbo
#define   nover(QLOW, QHIGH, LOW, HIGH)   QLOW>HIGH || QHIGH<LOW

#define   bitCheck(a,k)  ((bool)(a&(1<<(k))))
#define   bitOff(a,k)    (a&(~(1<<(k))))
#define   bitOn(a,k)     (a|(1<<(k)))
#define   bitFlip(a,k)   (a^(1<<(k)))

#define   POPCOUNT       __builtin_popcount
#define   POPCOUNTLL     __builtin_popcount
#define   RIGHTMOST      __builtin_ctzll
#define   LEFTMOST(x)    (63-__builtin_clzll((x)))

#define   pii      pair<int,int>
#define   pll      pair<ll,ll>
#define   vi       vector<int>
#define   FI       freopen("in.txt", "r", stdin)
#define   FO    freopen("out.txt", "w", stdout)
#define   MOD      1000000007
#define   inf      INT_MAX/3

int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};

#define   fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
ll p[100010];
ll sz,sidx,lidx=-1;
ll bin(ll lo, ll hi, ll val)
{
    ll ans = 0;
    lo = max(0LL,lidx);
    while(lo<=hi)
    {
        ll mid = (lo+hi)/2LL;
        if(p[mid]<=val)
        {
            ans = mid;
            lo = mid+1;
        }
        else hi = mid-1;
    }
    return ans;
}
    ll n,m,k;
ll fnd(ll val)
{
//    cout <<"val  " <<  val << endl;
    sidx = bin(0,m-1,val);
    sz = 0;
    if(lidx<sidx)
    {
        sz = sidx-lidx;
    }
//    cout <<"sidx  " <<  sidx << endl;
//    cout <<"sz  " <<  sidx << endl;
//    getchar();
    return sz;
}
int main()
{
    sfl3(n,m,k);
    ll cnt = 0;
    for(int i=0; i<m; i++)
    {
        sfl(p[i]);
    }
    sort(p,p+m);
    int st=1;
    ll last = k;
    ll ex = 0;
    for(int i=0; i<m; i++)
    {
        ll a = p[i];
        ll now = ((a%k)+ex)%k;
        if(now==0)
        {
            st = a-k+1;
            last = a;
        }
        else if(k<a)
        {
            st = a-now+1;
            last = st+k-1;
        }
//        cout << i << endl;
//        cout << st << endl;
//        cout << "last = " << last << endl;
//        getchar();
        while(lidx<m-1&&fnd(last)>=1)
        {
            cnt++;
            last += sz;
            lidx = sidx;
            ex += sz;
            ex %= k;
        }
        i=lidx;
    }
    cout << cnt << endl;
}