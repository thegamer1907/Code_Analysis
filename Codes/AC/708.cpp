#include <bits/stdc++.h>

#define ll /*unsigned*/ long long int
#define ld double
#define ZZ (ll)0
#define cinf(a) scanf("%lf",&a)
#define coutf(a) printf("%.12lf ",a)
#define cins(a) scanf(" %s",a)
#define couts(a) printf("%s",a)
#define cin(a) scanf("%lld",&a)
#define cout(a) printf("%lld\n",a)
#define cout_(a) printf("%lld ",a)
#define coutc(a) printf("%c",a)
#define cinc(a) scanf(" %c",&a)
#define coutp(a,b) printf("%lld %lld\n",a,b)
#define debug couts("chu") ;
#define SZ(a) (ll)a.size()
#define next_prm std::next_permutation
#define ALL(x) x.begin(),x.end()
#define endl '\n'
#define M 1000000007
#define MAX 9223372036854775807
#define MIN -9223372036854775//807
#define pb(a) push_back(a)
#define mmp(a,b) make_pair (a,b)
#define pmp(a,b) push_back(make_pair(a,b))
#define pp pair
#define rev reverse
#define S second
#define F first
#define flush fflush(stdout)
#define LB lower_bound
#define UB upper_bound
#define cnt_bin1(x) __builtin_popcountll(x)
#define bsa(v,n,a) binary_search(v,v+n,a)
#define bsv(v,a) binary_search(v.begin(),v.end(),a)
#define PI 3.1415926535897932
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define rand() ((rand()<<15)+rand())
using namespace std ;
//******************************************************************--UTILITIES--************************************************************************//
/*FILE INPUT OUTPUT REDIRECT
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 */
/*struct node2 {
    ll x,y ;
    ll val ;
    ll cid ;
}aux2;
struct compare {
    bool operator()(node2 l, node2 r) {
            return l.val > r.val ;					// MIN PQ
    }
};
std::priority_queue<node2,std::vector<node2>,compare > pq ;*/
ll fast_power (ll a,ll x,ll mm) {
    if (x==0)
        return 1 ;
    else if (x==1)
        return a%mm ;
    else
    {	ll y=fast_power (a,x/2,mm)%mm ;
        y=((y%mm)*(y%mm))%mm ;
        if (x%2==1)
            return ((a%mm)*(y%mm))%mm ;
        else
            return y%mm ;
    }
}
bool CheckOverflow (ll a,ll b) {
    if (a>1e18/b)   return true ;
    else return false ;
}
ll SumOfDigits (ll x) {
    ll sum=0 ;
    while (x>0)
    {   sum+=x%10 ;
        x/=10 ;
    }
    return sum ;
}
ll mod (ll a,ll b) {
    if (a<0)
    {	a=(-a)%b ;
        if (a!=0)
            a=b-a ;
    }
    else
        a=a%b ;
    return a ;
}
ld ldabs (ld n) {
    if (n<0)    return -n ;
    return n ;
}
ll mul (ll a,ll b,ll mm) {
    return (mod(a,mm)*mod(b,mm))%mm ;
}
ll add(ll a,ll b,ll mm) {
    return (mod(a,mm)+mod(b,mm))%mm ;
}
ll sub (ll a,ll b,ll mm) {
    return mod(a-b,mm)%mm ;
}
ll gcd (ll a,ll b) {
    if (a==-1||b==-1)   return -1 ;
    if (a==0||b==0)   return b|a ;
    else    return __gcd(a,b) ;
}
ll lcm (ll a,ll b) {
    return (a*b)/__gcd(a,b) ;
}
ll MMI (ll a,ll mm) {
    return fast_power(a,mm-2,mm)%mm ;
}
ld maxld (ld a,ld b) {
    if (a<b)    return b ;
    else return a ;
}
ld minld (ld a,ld b) {
    if (a<=b)    return a ;
    else return b ;
}
ll LOG2 (ll a) {
    ll cnt=0 ;
    while (a>0) {
        cnt++ ;
        a=a>>1 ;
    }
    return cnt ;
}
//*******************************************************************************************************************************************************//
//*****************************************************************-BY YOUR_DAD-*************************************************************************//
//*****************************************************************-PROGRAM STARTS FROM HERE-************************************************************//
bool isPer (ll n) {
    ll sum=0 ;
    while (n) {
        sum+=n%10 ;
        n/=10 ;
    }
    if (sum==10)    return true ;
    else return false ;
}
int main () {
    ll i,k,c=0 ;
    cin(k) ;
    for (i=1;i<=10800100;i++) {
        if (isPer(i))   c++ ;
        if (c==k)   {
            cout(i) ;
            break ;
        }
    }
    return 0 ;
}