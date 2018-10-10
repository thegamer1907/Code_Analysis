#include <bits/stdc++.h>

using namespace std;
using namespace __gnu_cxx;

typedef double db;
typedef long long ll;
typedef pair<int,int> ii;

string str;
int nb, ns, nc;
int pb, ps, pc;
long long r;

int oneB, oneS, oneC;

bool ok(long long x){
  long long needB = x * oneB;
  long long needS = x * oneS;
  long long needC = x * oneC;

  needB = max(needB - nb, 0LL);
  needS = max(needS - ns, 0LL);
  needC = max(needC - nc, 0LL);

  if(needB * pb + needS * ps + needC * pc <= r)
    return true;
  else
    return false;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
#endif
  cin >> str;
  cin >> nb >> ns >> nc;
  cin >> pb >> ps >> pc;
  cin >> r;

  oneB = count(str.begin(), str.end(), 'B');
  oneS = count(str.begin(), str.end(), 'S');
  oneC = count(str.begin(), str.end(), 'C');

  long long l = 0, r = 100000000000000LL, mid;
  while(l < r){
    mid = l + (r - l + 1) / 2;
    if(ok(mid))
      l = mid;
    else
      r = mid - 1;
  }
  cout << l << endl;
}
