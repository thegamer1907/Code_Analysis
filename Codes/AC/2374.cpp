#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define over LONG_LONG_MAX
ll inf = 1LL << 60;
ll mod = 1000000007;
double pi = acos(-1.0);

using namespace std;

const ll N = 10000000;
vector<ll> lf(10000002,0);
vector<ll> p(10000002,0);

void build(){
  for(ll i=2 ; i<=N ; i+=2) lf[i] = 2;
  for(ll i=3 ; i<=N ; i+=2){
    if(lf[i] == 0){
      lf[i] = i;
      for(ll j=i*i ; j<=N ; j+=i) if(lf[j] == 0) lf[j] = i;
    }
  }
}

int main(void){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  //freopen("in.in", "r", stdin);
  build();
  ll n, x;
  cin >> n;
  for(ll i=0 ; i<n ; i++){
    cin >> x;
    while(x>1){
      p[lf[x]]++;
      ll temp = lf[x];
      while(x>1 && lf[x] == temp)
        x/=lf[x];
    }
  }
  p[1] = 0;
  for(ll i=3 ; i<=N ; i++){
    p[i] += p[i-1];
  }
  int m;
  cin >> m;
  while(m--){
    ll l, r;
    cin >> l >> r;
    if(l>N) cout << 0 << endl;
    else{
      r = min(r, N);
      cout << p[r] - p[l-1] << endl;
    }
  }
  return 0;
}

