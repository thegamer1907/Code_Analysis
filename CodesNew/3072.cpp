#include <bits/stdc++.h>

using namespace std;

typedef int64_t li;
typedef pair<li, li> pll;
#define all(x) x.begin(), x.end()
#define sz(x) x.size()

template <class T>
inline void in(T &a) {
      cin >> a;
}

template <class... Args>
inline void out(Args... args) {}

template <class Head, class... Args>
inline void out(Head head, Args... args) {
      cout << head;
      out(args...);
}

int main() {
      int cnt; in(cnt);
      string str; in(str);

      int len = sz(str);

      if (cnt == 0) {
            vector <li> q;
            li s = 0;
            for (int i = 0; i < len; ++i) {
                  if (str[i] == '0' && (i == 0 || str[i - 1] == '1')) {
                        q.push_back(1);
                  }
                  else if (str[i] == '0'){
                        q.back()++;
                  }
            }
            for (auto i : q) {
                  s += (1+i) *i/2;
            }
            out(s, '\n');
            return 0;
      }

      vector <li> suf(len);
      map <int, int> cntNULL;

      int lastPos = -1;

      for (int i = 0; i < len; ++i) {
            if (str[i] == '0') {
                  cntNULL[lastPos]++;
            }
            else {
                  lastPos = i;
            }
      }

      for (int i = 0; i < len; ++i) {
            if (str[i] == '1')
                  suf[i]++;
            if (i) suf[i] += suf[i - 1];
      }

      li sol = 0;

      for (int i = 0; i < len; ++i) {
            li val = suf[i];

            li ind = lower_bound(all(suf), (val+cnt) - (str[i] == '1')) - suf.begin();

            if (ind >= sz(suf)) continue;

            if (suf[ind] != (val + cnt) - (str[i] == '1')) continue;

            if (ind != sz(suf)) {
                  sol += 1;
                  sol += cntNULL[ind];
            }

      }

      out(sol, '\n');

      return 0;
}