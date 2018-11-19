#include <bits/stdc++.h>

using namespace std;


#define MAXN 101
#define MAGIC 18
string s[MAXN*2];
int h[MAXN*2][1<<MAGIC];

void prn(int i) {
  for (int j = 0; j < 10; ++j) {
    cout << h[i][j] << " ";
  }
  cout << endl;
}

void update(string S, int i) {
  int I=0;
  reverse(S.begin(), S.end());
  //cout << "S = " << S << endl;
  for (int i = S.size()-1; i >= 0; --i) {
    I += (S[i]=='1')<<i;
  }
  h[i][I] = max(h[i][I], (int)S.size());
}


int cc(int u, int v, int k) {
  for (int i = 0; i < (1<<MAGIC); ++i) {
    h[k][i] = max(h[u][i], h[v][i]);
  }
  s[k] = s[u]+s[v];
  int maxlen = min(MAGIC, (int)max(s[u].size(), s[v].size())+1);
  for (int i = 2; i <= maxlen; ++i) {
    int minind = max(0, (int)s[u].size()-(i-1));
    for (int j = minind; i+j<=(int)s[k].size() && j<(int)s[u].size(); ++j) {
      update(s[k].substr(j, i), k);
    }
  }
  if (s[k].size()>2*MAGIC) {
    s[k] = s[k].substr(0, MAGIC) + s[k].substr(s[k].size()-MAGIC, MAGIC);
  }
  //cout << "k = " << k << endl;
  //prn(k);
  int ret=0;
  int l;
  for (l = 1; l < MAGIC; ++l) {
    for (int i = 0; i < (1<<l); ++i) {
      //cout << "l = " << l << " | i = " << i << endl;
      if (h[k][i]<l) return l-1;
    }
  }
  //assert(0==1);
  return MAGIC-1;
}



int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> s[i];
    for (int j = 0; j < s[i].size(); ++j) {
      for (int l = 1; l <= min(MAGIC, (int)s[i].size()-j); ++l) {
        update(s[i].substr(j, l), i);
      }
    }
    //cout << "i = " << i << endl;
    //prn(i);
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    cout << cc(u, v, n+i) << endl;
  }
  return 0;
}
