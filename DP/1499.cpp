#include <iostream>
#include <vector>
using namespace std;

int main() {
      int n;
      cin >> n;
      vector <int> a(n);
      
      for (int i = 0; i < n; i++) cin >> a[i];
      
      int maxx = 0, trmax = 0, maxl=0, maxr=0, trl=0, trr=0; 
      for (int i = 0; i < n; i++) {
            if (a[i]) trmax--;
            else trmax++;
            if (trmax >= maxx) {
                  maxx = trmax;
                  maxl = trl;
                  maxr = i;
            }
            else if (trmax < 0) {
                  trl = trr = i+1;
                  trmax = 0;
            }
      }
      for (int i = maxl; i <= maxr; i++) a[i] = 1 - a[i];
      int cnt = 0;
      
      for (int i = 0; i < n; i++) if (a[i]) cnt++;
      cout << cnt << endl;
      return 0;
}