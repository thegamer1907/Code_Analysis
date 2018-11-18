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
  ll a[3],b,c,d,x,y;
  cin>>a[0]>>a[1]>>a[2]>>c>>d; a[1]/=5; a[2]/=5;
  sort(a,a+3);
  if(c>a[0]&&c<=a[1]) x=1;
  else if(c>a[1]&&c<=a[2]) x=2;
  else x=3;
  if(d>a[0]&&d<=a[1]) y=1;
  else if(d>a[1]&&d<=a[2]) y=2;
  else y=3;
  if(x==y) cout<<"YES"; else cout<<"NO";
  return 0;
}
