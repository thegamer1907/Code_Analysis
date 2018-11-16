#include <bits/stdc++.h>
#define mod 1000000007
#define inf 1<<30
#define ll long long
#define fast ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mp make_pair
#define sz(a) a.size()
#define pb push_back
#define eb emplace_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define vi vector<int>
#define vpii vector<pair<int,int> >
#define all(a) a.begin(),a.end()
#define Endl "\n"
#define ff first
#define ss second
using namespace std;
ll n;
vi a;
int main(){
    fast
    cin>>n;
    a.resize(n);
    rep(i,0,n) cin>>a[i];
    vi b(n);
    int one=0;
    rep(i,0,n){
        if(a[i]) one++;
        if(a[i]) b[i]=-1;
        else b[i]=1;
    }
    int ans=b[0],cur=b[0];
    //cout<<cur<<" ";
    rep(i,1,n){
        cur=max(cur+b[i],b[i]);
       // cout<<cur<<" ";
        ans=max(ans,cur);
    }
    //cout<<endl;
    cout<<ans+one <<endl;
}
