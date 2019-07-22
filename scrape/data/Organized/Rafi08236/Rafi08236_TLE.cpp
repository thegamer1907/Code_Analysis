#include <bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
#define ll long long
#define loop(x,n,a) for(int x =a; x < n;++x)
#define loop_rev(x,n,a) for(int x = n-1; x >= a;--x)
int main(){
    ll n,m,k;cin>>n>>m>>k;
    ll a[m];
    loop(i,m,0)cin>>a[i];
    int cnt=1;
    int i=0;
    ll p=a[0]/k;
    if(a[0]%k) ++p;
    ll sh=0;
    ll r=0;
    while(i<m){
        bool fl=true;
        while(i+1<m){
            ll f=(a[i+1]-sh)/k;
            if((a[i+1]-sh)%k)++f;
            if(f==p){
                fl=false;
                ++cnt;
                ++i;
            }
            else break;
        }
        ++r;
        sh += cnt;
        cnt=1;
        if(!fl) ++i;
        p=a[i]/k;
        if((a[i]-sh)%k) ++p;
    }
    cout<<r;
    return 0;
}