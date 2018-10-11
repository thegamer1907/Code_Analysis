#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define db double
#define pi 3.141592653589
#define mod 1000000007
#define pp(x,y) pair<x,y>
#define pll pair<ll,ll>
#define vv(x) vector<x>
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define trav(x) for(auto it: x)
#define travN(n) for(ll i=0 ; i<n ; i++)
#define endl "\n"
#define all(x) x.begin(),x.end()
#define file freopen("inp.in", "r", stdin); freopen("op.out", "w", stdout);
using namespace std;
ll n,ans;
bool valid(ll k){
    ll l=n,s=0;
    while(l>0){
        s+=min(l,k);
        l-=min(l,k);
        if(l>=10)
            l-=(l/10);
    }
    if(s+s>=n)
        return true;
    return false;
}
int main(){
    //FIO;
    cin>>n;
    ll b=1,e=n,m;
    while(b<=e){
        m=(b+e)/2;
        if(valid(m)){
            ans=m;
            e=m-1;
        }
        else
            b=m+1;
    }
    cout<<ans;
    return 0;
}
