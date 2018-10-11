#include <iostream>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define lp(a,i,m)  for(int i=a;i<m;i++)
#define lpR(a,i,m) for(int i=m-1;i>=a;i--)
#define ll long long
#define pb push_back
#define read(n) scanf("%d",&n)
#define MOD 1000000007
///YOU CAN DO IT ACPC2018!!
///Take a risk dont always play it safe or you will die wondering !!
ll gcd(ll a, ll b) {
    ///bdl ma 3mla a3ml subtract momkn a3mlha f 5atwa wa7da en a3ml mod
return b == 0 ? a : gcd(b, a % b);
}
ll n;
ll mp[10000007];
ll arr[10000005];
int prime[10000005];
void SieveOfEratosthenes(ll n)
{
  memset(arr,0,sizeof arr);
  memset(prime,1,sizeof prime);
  for(ll p=2;p<=n;p++){
      if(prime[p]){
        arr[p]+=mp[p];
        for(ll j=p*2;j<=n;j+=p){
            prime[j]=0;
            arr[p]+=mp[j];
        }
      }
  }

}
int main(){
scanf("%I64d",&n);
ll x;
ll mx=0;
lp(0,i,n){scanf("%I64d",&x);mp[x]++;
mx=max(mx,x);}
SieveOfEratosthenes(mx);
lp(2,i,mx+1){
    arr[i]+=arr[i-1];
}
int m ;
scanf("%d",&m);
while(m--!=0){
    ll l,r;
    scanf("%I64d%I64d",&l,&r);
    if(l>mx && r>mx)printf("0\n");
    else{
    l=min(l,mx);
    r=min(mx,r);
    printf("%I64d\n",arr[r]-arr[l-1]);
    }
}


return 0;
}
