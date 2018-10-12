/*------_mtg98------*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const double pi=2*acos(0.0);
double inff=1.0/0.0;
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl;
#define ll long long int
#define inf 10000000000
#define MOD 1000000007
#define pb push_back
#define sz(x) (int)x.size()
#define mp make_pair
#define lbd lower_bound
#define ubd upper_bound
#define ipair pair<ll,ll> 
#define all(v) v.begin(),v.end()
#define rep(a,b,c) for(a=(int)b;a<(int)c;a++)    
#define bac(a,b,c) for(a=(int)b;a>=(int)c;a--)
#define se second
#define f first
#define ios ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
#define mem(a,val) memset(a,val,sizeof a)
#define endl "\n"
#define mxn 1000001
#define vi vector<ll>
#define vii vector<ipair> 
#define si set<ll> 
ll x,y,n,m,i,t,j,k,w,u,c;
ll b[mxn];ll v[mxn];
ll bin(ll x){
    ll lo=1,hi=n,mid;
    while(lo<hi){
        mid=lo+(hi-lo+1)/2;
        if(b[mid]<=x){
            lo=mid;
        }
        else hi=mid-1;
    }
    if(b[lo]<=x){
        return lo;
    }
    else return -1;
}
int main(){
    cin>>n>>k;
    rep(i,1,n+1){
        cin>>t;
        b[i]=b[i-1]+t;
    }
    rep(i,1,k+1){
        cin>>t;
        v[i]=v[i-1]+t;
    }
    c=0;
    rep(i,1,k+1){
        t=bin(v[i]-c);
        if(t==-1){
            cout<<n<<endl;
            continue;
        }
        else if(t!=n){
            cout<<(n-t)<<endl;
        }
        else {
            c=v[i];
            cout<<n<<endl;
        }
    }
}