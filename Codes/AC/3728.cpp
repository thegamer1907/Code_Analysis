#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define over LONG_LONG_MAX
ll inf = 1LL << 60;
ll mod = 1000000007;
double pi = acos(-1.0);

using namespace std;

ll pb, ps, pc, B, S, C, r;

bool check(ll mid,ll b,ll s,ll c){
  ll nb = max(mid*B-b, 0LL), ns = max(mid*S-s,0LL), nc = max(mid*C-c, 0LL);
  if(nb * pb + ns * ps + nc * pc <= r) return true;
  return false;
}

int main(void){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  //freopen("in.in", "r", stdin);
  string t;
  cin >> t;
  for(int i=0 ; i<t.length() ; i++){
    if(t[i] == 'B') B++;
    else if(t[i] == 'S') S++;
    else C++;
  }
  ll b, s, c;
  cin >> b >> s >> c >> pb >> ps >> pc >> r;
  ll lo = 0, hi = 10000000000000, mid, ans = 0;
  while(lo<=hi){
    mid = (lo+hi)/2;
    if(check(mid, b, s, c)) ans = max(ans, mid), lo = mid+1;
    else hi = mid-1;
  }
  cout << ans;
  return 0;
}

