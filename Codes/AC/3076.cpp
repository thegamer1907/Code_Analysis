#include <bits/stdc++.h>
#define DEBUG(x) cout << #x << " = " << x << endl;
#define PR(A,n)  { cout << #A << " = "; for (int iter = 1, _n = (n); iter <= _n; iter++) \
                    cout << A[iter] << ' '; cout << endl; }
#define PR0(A,n) { cout << #A << " = "; for (int iter = 0, _n = (n); iter < _n; iter++) \
                    cout << A[iter] << ' '; cout << endl; } 
#define _1 first
#define _2 second

using namespace std;

string s, r;
set<int> ok;

int floor(int target) {
  auto it = ok.upper_bound(target);
  if (it != ok.begin()) {
    it--;
    return *it;
  } else {
    return -1;
  }
}

vector<int> zfunction(string &s) {
  int n = s.length();
  vector<int> z(n);

  z[0] = n;
  int l = 0, r = 0;
  for (int i = 1; i < n; i++) {
    if (i > r) {
      z[i] = 0;
    } else {
      z[i] = min(z[i - l], r - i + 1);
    }
    while (i + z[i] < n && s[i + z[i]] == s[z[i]]) z[i]++;
    if (i + z[i] - 1 > r) {
      r = i + z[i] - 1;
      l = i;
    }
  }

  return z;
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
  cin >> s;
  // solve here
  int n = s.length();
  vector<int> zs = zfunction(s);

  int bs = -1, bl = -1;
  for (int i = 1; i < n; i++) {
    if (zs[i] + i - 1 == n - 1) {
      ok.insert(zs[i]);
    }
  }

  for (int i = 1; i < n; i++) {
    int oklength = -1;
    if (zs[i] + i - 1 == n - 1) {
      oklength = floor(zs[i] - 1);
    } else {
      oklength = floor(zs[i]);
    }

    if (oklength > 0) {
      if (oklength > bl) {
        bl = oklength;
        bs = i;
      }
    }
  }


  if (bl == -1) {
    cout << "Just a legend";
  } else {
    cout << s.substr(bs, bl);
  }
}
