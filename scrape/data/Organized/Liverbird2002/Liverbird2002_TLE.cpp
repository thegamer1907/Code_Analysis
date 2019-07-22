#include <bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fi first
#define se second


typedef long long ll;
typedef long long unsigned llu;
typedef vector<long> vec;

const
 long MaxM = 1e5 + 5;


long p[MaxM];

int main(){
  llu n,m,k1;
  cin >> n >> m >> k1;
  for (long i=1; i<=m; i++) {
    cin >> p[i];
  }
  p[m+1] = 0;

  long long pos,del;
  long long k = k1;



  pos = 1;
  long res = 0;
  while (true) {
    res += 1;
    del = 0;
    while ((p[pos] <= k) && (pos <= m)) {
        pos += 1;
        del += 1;
    }
    if (pos > m) {
        cout << res;
        return 0;
    }
    if (del == 0) {
        k += k1;
        res -= 1;
    }
    else {
       k += del;
    }
  }
  return 0;
}