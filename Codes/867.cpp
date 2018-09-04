#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define mp make_pair
#define cps CLOCKS_PER_SEC
#define mod (ll)1000000007
#define f first
#define s second
#define debug1(x) cout<<x<<"\n"
#define debug2(x,y) cout<<x<<" "<<y<<"\n"
#define debug3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
#define nl cout<<"\n";
#define priority_queue pq
#define inf (ll)1e15
#define test cout<<"abcd\n";
#define pi pair<int,int>
#define pii pair<int,pi>
#define pb push_back
#define mxn 100005


int main(){
   sp;
ll n,k;
cin>>n>>k;
if(k&1){
    cout<<1;
    return 0;
}
if(!(k&(k-1))){
    ll p=(int)log2(k);
    cout<<p+1;
    return 0;
}
vector<ll> v[51];
ll j=1LL;
for(int i=2; i<51; ++i){
    ll x=1LL<<j;
    v[i].pb(x);
    v[i].pb(x+x);
    ++j;
}
for(int i=2;i<51; ++i){
    ll a=v[i][0],d=v[i][1];
    if((k-a)%d==0){
        cout<<i;
        return 0;
    }
}
return 0;}
