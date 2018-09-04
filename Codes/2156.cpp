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
int main(){
    ios::sync_with_stdio(false);
   //freopen("input.txt", "rt", stdin);
   //freopen("output.txt", "wt", stdout);
    int n;
    cin>>n;
    vector<int> arr(n);
    lp(i,n)cin>>arr[i];
    ll sum1 ,sum3;
    sum1=sum3 =0;
    int i  =0 , j = n-1;
    ll ans = 0;
    while(i<=j){
        if(sum1 == sum3)ans = sum1;
        if(sum1<sum3){
            sum1+=arr[i];
            i++;
        }else{
            sum3+=arr[j];
            j--;
        }
        if(sum1 == sum3)ans = sum1;
        
    }
    cout<<ans;
    return 0;
    
}