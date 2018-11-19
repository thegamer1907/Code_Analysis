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
  char a,b,c,d;
  ll n,x=0,y=0,z=0,w=0,ans1=0,ans2=0;
  cin>>a>>b;
  cin>>n;
  for(ll i=0;i<n;i++){
    cin>>c>>d;
    if(c==a&&d==b) {cout<<"YES"; return 0;}
    if(c==b) ans1=1;
    if(d==a) ans2=1;
  }
  if(ans1&&ans2) cout<<"YES"; else cout<<"NO";
  return 0;
}
