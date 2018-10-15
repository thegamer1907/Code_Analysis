#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
#define EN cout<<endl
#define ld double
#define INF 0xfffffff
#define mod 1000000007
#define SIZE 3e9
#define pb push_back
#define print(A,n) for(i=0;i<n;i++) cout<<A[i]<<" "
#define do(ar,n)    ; for(int i=0;i<n;i++) ar[i]=false;
#define pi 3.141592653589793238
/*map<ll,ll> m;
map<ll,ll>::iterator mit;
vector<ll> v;
vector<ll>::iterator vit;
set<ll> s;
set<ll>::iterator sit;*/
ll i,j;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    ll n,m;
    cin>>n>>m;
    ll ar[n];
    ll mi=100000,ma=0;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<mi) mi=ar[i];
        if(ar[i]>ma) ma=ar[i];
    }
    ll cnt=0;
    for(i=0;i<n;i++) cnt+=abs(ar[i]-ma);
    ll v=max((ll)0,m-cnt);
    cout<<ceil((float)v/(float)n)+ma<<" "<<ma+m;
  return 0;
}