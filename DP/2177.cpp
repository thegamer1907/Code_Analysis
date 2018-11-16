#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(sdk) sdk.begin(),sdk.end()
#define mll map<ll,ll>
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;++i)
#define repd(i,a,b) for(ll i=a;i>=b;--i)
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mit(m) for(map<int, int > :: iterator it=m.begin();it!=m.end();++it)
#define mp make_pair
#define hell 998244353
#define endl '\n'
#define vvll vector<vector<ll> >
#define vll vector<ll>
#define mint map<int,int> 
#define int long long
#define sll set<int>
#define pll pair<int,int>
#define mset(a,b) memset(a,b,sizeof a)
#define sz(a) a.size()
    

signed main(){
    fastio;
    int q[100005],n,m,a[100005];
    set<int> s;
    cin>>n>>m;
    rep(i,0,n){
        cin>>a[i];
    }   
    repd(i,n-1,0){
        s.insert(a[i]);
        q[i]=s.size();
    }
    rep(i,0,m){
        int x;
        cin>>x;
        cout<<q[x-1]<<endl;
    }

    
}