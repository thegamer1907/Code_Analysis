/*
  -------------
  Prateek Celly
  DA-IICT
  -------------
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define MOD 1000000007

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll n,m,x,maxi=-1,sum=0; cin>>n>>m;
  for(ll i=0;i<n;i++) {cin>>x; maxi=max(maxi,x); sum+=x;}
  cout<<max(maxi,(ll)ceil(float(sum+m)/n))<<' '<<maxi+m;
  return 0;
}
