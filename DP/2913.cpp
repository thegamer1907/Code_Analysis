#include "bits/stdc++.h"
using namespace std;
struct ${$(){ios_base::sync_with_stdio(0);cin.tie(0);}}$;

const int N = 200005;

int main() {
   int n, k;
   cin >> n >> k;
   vector <int> a(n), b(k);
   int cnt = 0;
   int idx = -1;
   for(int i = 0; i < n; i++) {
      cin >> a[i];
      cnt += a[i] == 0;
      if(a[i] == 0)
         idx = i;
   }

   for(int i = 0; i < k; i++) {
      cin >> b[i];
   }

   if(cnt > 1) {
      cout << "Yes" << endl;
   } else {
      if(idx >= 0)
         a[idx] = b[0];
      if(is_sorted(a.begin(), a.end()))
         cout << "No" << endl;
      else
         cout << "Yes" << endl;
   }

   return 0;
}
