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
bool s[10000909];
ll cnt[10000909];
ll f[10000909];
void sieve(){
    s[0] = s[1] = 1;
    for(int i  =2 ; i <= 10000000 ; i++){
        if(!s[i]){
            //f[i]+= cnt[i];
            for(int j = i ; j<=10000000 ;j+=i){
                f[i]+=cnt[j];
                s[j] = 1;
            }
        }
    }
}
int main(){
    std::ios_base::sync_with_stdio(false);
     //freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    int n;
    scanf("%d",&n);
    while(n--){
        int x;
        scanf("%d",&x);
        cnt[x]++;
    }
    sieve();
    for(int i = 1 ;i <= 10000000 ;i++)f[i]+=f[i-1];
    int q;
    scanf("%d",&q);
    while(q--){
    int l,r;
    scanf("%d%d",&l,&r);
    r = min(10000000,r);
    if(l > r)printf("0\n");
    else printf("%I64d\n",f[r]-f[l-1]);
    }
    return 0;
} 