#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long
#define MOD 998244353
int main(){
  int n,t;cin >>n >>t;
  int *r; r=new int[n]; fill(r,r+n,0); r[0]=1;
  for (int i=0;i<n-1;++i){
    int a;
    cin  >>a;
    if (r[i])
      r[i+a]=1;
  }
  if (r[t-1])
    cout <<"YES";
  else cout <<"NO";
  return 0;
}
