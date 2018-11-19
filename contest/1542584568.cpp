#include <bits/stdc++.h>
#define DEBUG(x) cout << #x << " = " << x << endl;
#define PR(A,n)  { cout << #A << " = "; for (int iter = 1, _n = (n); iter <= _n; iter++) \
                    cout << A[i] << ' '; cout << endl; }
#define PR0(A,n) { cout << #A << " = "; for (int iter = 0, _n = (n); iter < _n; iter++) \
                    cout << A[i] << ' '; cout << endl; } 
#define _1 first
#define _2 second

using namespace std;
double h, m, s, t1, t2;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
  cin >> h >> m >> s >> t1 >> t2;
  if (t1 == 12) t1 = 0;
  if (t2 == 12) t2 = 0;
  if (h == 12) h = 0;

  if (t1 > t2) swap(t1, t2);
  t1 *= 5; t2 *= 5;
  h = h * 5 + m / 60 + s / 3600;
  m = m + s / 60;
  if (h > t1 && h < t2) {
    if (m > t1 && m < t2 && s > t1 && s < t2) {
      cout << "YES";
    } else {
      cout << "NO";
    }
  } else {
    if ((m < t1 || m > t2) && (s < t1 || s > t2)) {
      cout << "YES";
    } else {
      cout << "NO";
    }
  }
}
