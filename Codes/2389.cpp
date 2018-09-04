#include<bits/stdc++.h>
#define por(i,a,b) for(i=a;i<b;i++)
#define sf(R) scanf("%I64d",&R)
#define pf(R) printf("%I64d",R)
#define pb(x) push_back(x)
#define ld long double
#define mo 1000000007
#define ll long long
#define S second
#define f first
#define N 10000001
using namespace std;
ll nb[N];
ll pri[N];
ll res[N];

int main(){
ios_base::sync_with_stdio (0);
cin.tie(0);
ll n,m,x,i;
cin>>n;
por(i,0,n){
cin>>x;
nb[x]++;
}
por(i,2,(ll)N){
if(pri[i]==0){
    for(ll j=i;j<(ll)N;j+=i){
        res[i]+=nb[j];
        pri[j]++;
    }
 }   res[i]+=res[i-1];

}

cin>>m;
ll l,r;
while(m--){
    cin>>l>>r;
    r=min(r,(ll)1e7);
    l=min(l,r);
    cout<<res[r]-res[l-1]<<endl;
}
return 0;}
