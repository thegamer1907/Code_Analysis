#include <bits/stdc++.h>

#define INF 10000000000000
#define FOR(i, a, b) for(int i=int(a); i<int(b); i++)
#define FORC(cont, it) for(decltype((cont).begin()) it = (cont).begin(); it != (cont).end(); it++)
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;

ll ruples, B = 0, S = 0, C = 0, nb, ns, nc, pb, ps, pc;

ll calculateMoney(ll hamburgers) {
  ll money = 0;
  if(B) {
    money += max((hamburgers*B - nb)*pb, 0LL);
  }
  if(S) {
    money += max((hamburgers*S - ns)*ps, 0LL);
  }
  if(C) {
    money += max((hamburgers*C - nc)*pc, 0LL);
  }
  return money;
}

int main() {
  string recipe;
  cin >> recipe;
  FOR(i, 0, recipe.length()) {
    switch(recipe[i]) {
      case 'B':
        B++;
        break;
      case 'S':
        S++;
        break;
      case 'C':
        C++;
        break;
    }
  }
  cin >> nb >> ns >> nc;
  cin >> pb >> ps >> pc;
  cin >> ruples;
  ll l = 0, r = INF, m, max_burgers;
  while(l <= r) {
    m = l + (r-l)/2;
    ll money = calculateMoney(m);
    if(money < ruples) {
      max_burgers = m;
      l = m+1;
    }
    else if(money > ruples) {
      r = m-1;
    }
    else {
      max_burgers = m;
      break;
    }
  }
  cout << max_burgers << endl;
  return 0;
}