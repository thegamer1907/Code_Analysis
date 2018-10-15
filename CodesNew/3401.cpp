#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll ,ll>
#define rep(i, a, b) \
    for (int i = int(a); i <= int(b); i++)
#define case int t;cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mpp make_pair
#define pb push_back
#define mod 1000000007 
#define intmin 0.0000001 
#define all(x) x.begin(),x.end()

int main(){
    ll n,m,x;
    cin>>n>>m;
    ll a[n];
    rep(i,0,n-1){
        cin>>a[i];
    }
    sort(a,a+n);
    ll h=a[n-1];
    ll l = a[n-1]+m;
    for(ll i=0;i<n;i++){
        if(a[i]+m>=h){
            ll g=a[i];
            a[i]=h;
            m=m-(h-g);
        }else{
            a[i]=a[i]+m;
            m=0;
            break;
        }
    }
    if(m==0){
        cout<<h<<" "<<l<<endl;
    }else{
       // cout<<h<<" "<<m/n<<" "<<m%n<<endl;
        cout<<h+m/n+(m%n?1:0)<<" "<<l<<endl;;
    }

}



