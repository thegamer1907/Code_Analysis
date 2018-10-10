#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define PI 3.141592653
using namespace std;
ll powmod(ll a,ll b) {ll res=1;a%=M; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%M;a=a*a%M;}return res%M;}

int main()
{

    //freopen("input.txt","r",stdin);//redirects standard input
    //freopen("output.txt","w",stdout);//redirects standard output
    ios::sync_with_stdio(false);

    string s;
    cin>>s;

    ll f[3]={0};
    for(int i=0;s[i];i++){
        if(s[i]=='B')
            f[0]++;
        else if(s[i]=='S')
            f[1]++;
        else
            f[2]++;
    }
    ll n[3];
    ll p[3];
    cin>>n[0]>>n[1]>>n[2];
    cin>>p[0]>>p[1]>>p[2];
    ll r;
    cin>>r;
    ll hi=10000000000000,lo=0;
    ll mid;
    while(lo<hi-1){
        mid=(lo+hi)/2;
        ll bs=f[0]*mid;
        ll ss=f[1]*mid;
        ll cs=f[2]*mid;
        ll zero=0;
        if(max(bs-n[0],zero)*p[0] + max(ss-n[1],zero)*p[1] + max(cs-n[2],zero)*p[2] <=r){
            lo=mid;
        }
        else
            hi=mid;
    }
    cout<<lo<<endl;
    return 0;
}

