#include<bits/stdc++.h>
using namespace std;
#define f first
#define se second
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define lp(i,n) for(int i =0;i<n;i++)
#define mem(a,v) memset(a,v,sizeof(a))
#define X real()
#define Y imag()
#define angle(a) (atan2(a.Y , a.X))
#define vec(a,b) ((b)-(a))
//#define length(a) (hypot(a.Y , a.X))
#define normalize(a) (a)/length(a)
#define dotP(a,b) ((conj(a)*b).X)
#define crossP(a,b) ((conj(a)*b).Y)
#define same(p1,p2) (dotP(vec(p1,p2),vec(p1,p2))<EPS)
#define lengthSqr(a)   dotP(a,a)
#define rotate0(p,ang) ((p)*exp(point(0,ang)))
#define rotateA(p,ang,about) (rotate0(vec(about,p),ang)+about)
#define reflect0(v,m) conj(v/m)*m
const double PI = acos(-1.0);
const double EPS = (1e-10);
const long long int INF = 0x3f3f3f3f;
const long long mod  = (1e9)+7;
typedef long long int ll;
typedef unsigned long long ull;
typedef complex<double> point;
ll my_mod(ll num,ll mod){
    ll ret = num%mod;
    while(ret<0)ret+=mod;
    return ret;
}
ll gcd(ll a,ll b){
    return a == 0? b: gcd(b%a,a);
}
string ss;
ll b,c,s;
ll nb,ns,nc;
ll priceb,prices,pricec;
ll r;
bool can(ll num){
    ll needb = num*b,needc = num*c,needs = num*s;
    needb = max(0LL,needb-nb);
    needc = max(0LL,needc-nc);
    needs = max(0LL,needs-ns);
    ll money =  needb*priceb + needc*pricec + needs*prices;
    return money<=r;
}
int main(){
    ios::sync_with_stdio(false);
   //freopen("input.txt", "rt", stdin);
   //freopen("output.txt", "wt", stdout);
    cin>>ss;
    lp(i,ss.size()){
        if(ss[i]=='B')b++;
        else if(ss[i]=='C')c++;
        else s++;
    }
    cin>>nb>>ns>>nc;
    cin>>priceb>>prices>>pricec;
    cin>>r;
    ll lo = 0,hi = 2*(1e12);
    ll ans = 0;
    while(lo<hi-2){
        ll mid = (lo+hi+1)>>1;
        if(can(mid)){
            lo = mid+1;
            ans = mid;
        }else{
            hi = mid;
        }
    }
    for(ll i = lo ; i< lo+10 ; i++){
        if(can(i))ans=i;
    }
    cout<<ans;
    return 0;
}