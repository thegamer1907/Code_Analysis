#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;
typedef vector<VI> VVI;
int n;

#define ll long long
int main () {
  cin >> n;
  VI a(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  int k = *min_element(a.begin(), a.end());
  int pos = (0 + k) % a.size();
  while(k < a[pos]) {
    k += 1;
    pos = k % a.size();
  }
  cout << pos + 1<< endl;
 return 0;
}
