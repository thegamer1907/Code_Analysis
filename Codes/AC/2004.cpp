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
#define mxn 100001

map<ll,ll> m1,m2;

int main(){
    sp;
ll n,k;
cin>>n>>k;
ll a[n];
for(int i=0; i<n; ++i) {
    cin>>a[i];
    ++m1[a[i]];
}

ll ans=0;
for(int i=0; i<n; ++i){
   ll x=0,y=0;
   if(a[i]%k==0)
        x=m2[a[i]/k];
        --m1[a[i]];
   y=m1[a[i]*k];
   ans+=x*y;
   m2[a[i]]++;
}
cout<<ans;
return 0;
}



