
/*---------------------------- GOD HELP ME -------------------------*/
#include<bits/stdc++.h>
using namespace std;

/*-------------------------- Sajal Debnath -------------------------*/
/*---------------------- University of Barisal-------------------------*/

#define     fRead           freopen("input.txt","r",stdin)
#define     fWrite          freopen("output.txt","w",stdout)

#define     I(X)            scanf("%d",&(X))
#define     II(X, Y)        scanf("%d%d",&(X),&(Y))
#define     III(X,Y,Z)      scanf("%d%d%d",&(X),&(Y),&(Z))
#define     IL(X)           scanf("%lld",&(X))
#define     IIL(X, Y)       scanf("%lld%lld",&(X),&(Y))
#define     pb              push_back
#define     popb            pop_back
#define     lld             long long int
#define     ull             unsigned long long int
#define     max3(a,b,c)     max(a,max(b,c))
#define     max4(a,b,c,d)   max(max3(a,b,c),d)
#define     min3(a,b,c)     min(a,min(b,c))
#define     min4(a,b,c,d)   min(a,min3(b,c,d))
#define     MOD             1000000007
#define     f               first
#define     s               second
#define     mem(a,v)        memset(a,v,sizeof(a))
#define     mp              make_pair

#define gcd(a, b)           __gcd(a, b)
#define lcm(a, b)           ((a)*((b)/gcd(a,b)))

#define     show            printf("---sajal---\n")
#define     all(v)          v.begin(),v.end()
#define     fast            ios_base::sync_with_stdio(0);cin.tie(0)
#define     pii             pair<int,int>
#define     PLL             pair<lld,lld>
#define     MAX             100000000000014
#define     MIN             -100000000000014
#define     gti             greater<int>
#define     gtL             greater<lld>
#define     PI1             acos(-1.0)
#define     pi2             2.0*acos(0.0)
#define     endl            '\n'

//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move

//int Set(int N,int pos){return N=N | (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}
//__builtin_popcount // back_inserter() // stoll
// priority_queue<pii,vector<pii>,greater<pii> >q;
//priority_queue<int, vector<int>, greater<int> >pq; // DSCS;
//priority_queue<int, vector<int>, less<int> >pq; // INCS;

int Day12[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int prime100[]={2, 3, 5, 7, 11, 13, 17, 19, 23,29,31, 37, 41, 43, 47, 53, 59,61, 67,71, 73, 79, 83, 89, 97, 101, 103 };
//unsigned long long int phi[5000005]; // count relatively prime for 1 to n//
//void MYFHI(){lld max = 5000001;for(lld i=2;i<max;i++){ if(phi[i]==0){ phi[i]=i-1;for(lld j=i*2;j<max;j=j+i){ if(phi[j]==0) phi[j]=j;phi[j]=phi[j]-(phi[j]/i);}}}}
template <typename T> inline bool isLeap(T y) {return (y % 400 == 0) || (y % 100 ? y % 4 == 0 : false);}
template <typename T> inline T GCD (T a,T b ) {a = abs(a);b = abs(b); if(a < b) swap(a, b); while ( b ) { a = a % b; swap ( a, b ); } return a;}
template <typename T> inline T LCM(T x,T y){T tp = GCD(x,y);if( (x / tp) * 1. * y > 9e18) return 9e18;return (x / tp) * y;}
template <typename T> inline T BIGMOD(T A,T B,T M = MOD){T ret = 1;while(B){if(B & 1) ret = (ret * A) % M;A = (A * A) % M;B = B >> 1;}return ret;}
template <typename T> inline T BigMod(T A,T B,T M){T ret = 1;while(B){if(B & 1) ret = (ret * A) % M;A = (A * A) % M;B = B >> 1;}return ret;}
lld MySqrt(lld n){lld p=sqrt(n);if((p+1)*(p+1)<=n) return p+1;else if(p*p<=n) return p;else return p-1;}
lld MyPow(lld x, lld n){if(n==0) return 1; else if(n%2==0) return MyPow(x*x,n/2); else return x*MyPow(x*x,((n-1)/2));}
lld modInverse(lld n){ return BIGMOD(n,(lld)MOD-2)%MOD;}
/*-------------------------------------------------------------------------------------------------------------*/

lld a[1000000];
vector<lld>v;
int main()
{
	int n,q;
	II(n,q);

	for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i] += a[i-1];
        v.pb(a[i]);
    }

    lld carry  = 0;
    for(int i=1;i<=q;i++)
    {
        lld x;
        cin>>x;
        x += carry;
        int high = upper_bound(v.begin(),v.end() , x) - v.begin() ;

        if(high == n)
        {
            cout<<n<<endl;
            carry=0;
        }
        else
        {
            cout<<n-high<<endl;
            carry = x;
        }
    }
}

/*-------------------------------------------------------------------------------------------------------------*/
/// read the question correctly (what are the exact constraints?)
/// look out for SPECIAL CASES (n=1?) and overflow (ll vs int?)
/*-------------------------------------------------------------------------------------------------------------*/
