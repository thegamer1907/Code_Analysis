#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, t, suma=0;
  int cnt=-1;
  cin>>n>>t;
  vector<ll> a(n);
  queue<ll> b;
  for(auto &i : a){
    cin>>i;
  }
  for(int i=0; i<n; i++){
    suma+=a[i];
    b.push(a[i]);
    while(suma>t and !b.empty()){
      suma-=b.front();
      b.pop();
    }
    int pepe=(b.size());
    cnt=max(cnt, pepe);
  }
  cout<<cnt;
  return 0;
}