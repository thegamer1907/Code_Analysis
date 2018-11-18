/*
  -------------
  Prateek Celly
  DA-IICT
  -------------
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define f first
#define s second
#define MOD 1000000007

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll n,k,a[5]={},v[20]={};
  cin>>n>>k;
  for(ll i=0;i<n;i++) {for(ll j=0;j<k;j++) cin>>a[j]; v[a[0]+2*a[1]+4*a[2]+8*a[3]]=1;}
  for(ll i=0;i<=1<<k;i++)
  for(ll j=0;j<=1<<k;j++){
    if(v[i]&&v[j]&&!(i&j)) {cout<<"YES"; return 0;}
  }
  cout<<"NO";
  return 0;
}
