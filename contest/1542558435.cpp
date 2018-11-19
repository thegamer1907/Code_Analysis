#include <bits/stdc++.h>
using namespace std;

vector<vector<string> > dp{{}, {"0", "1"}};
vector<string> get_seq(unsigned k) {
  if(k < dp.size()) {
    return dp[k];
  }

  vector<string> res, tmp;
  tmp = get_seq(k - 1);
  for(string it : tmp) {
    res.push_back(it + string("0"));
    res.push_back(it + string("1"));
  }

  dp.push_back(res);

  return res;
}

struct my_string {
  my_string() : k(0) {}
  int k;
  string str;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  vector<my_string> s;
  cin >> n;
  s.resize(n);
  for(int i = 0; i < n; i++) {
    cin >> s[i].str;
    for(int j = 4; j >= 0; j--) {
      bool flag = true;
      vector<string> seq = get_seq(j);
      for(string it : seq) {
        if(s[i].str.find(it) == string::npos) {
          flag = false;
          break;
        }
      }

      if(flag) {
        s[i].k = j;
      }
    }
  }

  cin >> m;
  s.resize(n + m);
  pair<int, int> p;
  for(int i = 0; i < m; i++) {
    cin >> p.first >> p.second;
    --p.first; --p.second;
    s[n + i].str = s[p.first].str + s[p.second].str;
    int k = max(s[p.first].k, s[p.second].k);

    for(int j = k; ; j++) {
      bool flag = true;
      vector<string> seq = get_seq(j);
      for(string it : seq) {
        if(s[n + i].str.find(it) == string::npos) {
          flag = false;
          break;
        }
      }
      if(flag) {
        s[n + i].k = j;
      } else {
        break;
      }
    }

    cout << s[n + i].k << '\n';
    if(s[n + i].str.length() > 1e6) {
      s[n + i].str = s[n + i].str.substr(0, 1e5) + s[n + i].str.substr(s[n + i].str.length() - 1e5);
    }
  }

  return 0;
}
