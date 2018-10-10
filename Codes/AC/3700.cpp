#include <bits/stdc++.h>
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define max(a,b) (((a) > (b)) ? (a) : (b))
using namespace std;
#define ll long long int
string ss;
ll nb,nc,ns,pb,ps,pc,s,c,b,r;
ll ok(ll x){
  ll ret = max(0, x*b-nb)*pb + max(0, x*c-nc)*pc + max(0, x*s-ns)*ps;
  return ret<=r;
}
int main(){
  std::cin >> ss >> nb >> ns >> nc >> pb >> ps >> pc >> r;
  for(ll i = 0; i<ss.size(); i++){
    if(ss[i]=='B') b++;
    if(ss[i]=='C') c++;
    if(ss[i]=='S') s++;
  }
  ll l = 0, r = 1e13, m;
  while (l <= r) {
    m = l + (r - l) / 2;
    if (ok(m))
      l = m + 1;
    else
      r = m - 1;
  }

  std::cout << r << '\n';
}
