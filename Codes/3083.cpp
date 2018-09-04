#include <bits/stdc++.h>
using namespace std;

string s; 
vector<char> c;
const int N = 1e6 + 1;
int z[N << 1];

void buildZ() {
  int l = -1, r = -1;
  z[0] = 0;
  for (int i = 1; i < c.size(); ++i) {
    if (l == -1 || i > r) {
      int j = 0;
      while (i + j < c.size() && c[j] == c[i + j]) ++j;
      if (j > 0) {
        l = i; r = i + j - 1;
      } else {
        l = r = -1;
      }
      z[i] = j;
    } else {
      int k = i - l;
      if (z[k] >= r - i + 1) {
        l = i;
        while (r < c.size() && c[r] == c[r - l]) r++;
        r--;
        z[i] = r - i + 1;
      } else {
        z[i] = z[k];
      }
    }
  }
}

void printAns(int st, int len) {
  if (len == 0) cout << "Just a legend" << endl;
  else {
    for (int i = 0; i < len; i++)
      cout << c[i + st];
    cout << endl;
  }
}

void answer() {
  int ans = 0, idx = 0;
  set<int> st;
  set<int>::iterator it;
  for (int i = c.size() - 1; i > 0; --i) {
    int l = z[i];
    if (i + l == c.size()) {
      st.insert(l);
      it = st.lower_bound(l - 1);
      l--;
    } else {
      it = st.lower_bound(l);  
    }
    if ((st.size() > 0 && it == st.end()) || *it > l) {
      if (it != st.begin()) it--;
      else it = st.end();
    }
    if (it != st.end() && ans < *it) {
      ans = *it;
      idx = i;
    }
  }
  
  printAns(idx, ans);
}

int main() {
  cin >> s;
  for (int i = 0; i < s.length(); ++i)
    c.push_back(s[i]);
  buildZ();
  answer();

  return 0;
}