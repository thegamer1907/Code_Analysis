//Daniel Grzegorzewski
#include <bits/stdc++.h>

#define MP make_pair
#define PB push_back
#define ST first
#define ND second

using namespace std;

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<PII> VII;
typedef long long LL;

void init_ios() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
}

string s[2];
VI ind;

int poz(string& s) {
  int res = 0;
  for (char c: s) {
    if (c == '+')
      ++res;
    else
      --res;
  }
  return res;
}

int main() {
  init_ios();
  cin >> s[0] >> s[1];
  for (int i = 0; i < s[1].size(); ++i)
    if (s[1][i] == '?')
      ind.PB(i);
  int hm = ind.size();
  int cnt = 0;
  for (int i = 0; i < (1<<hm); ++i) {
    string yolo = s[1];
    for (int j = 0; j < hm; ++j) {
      if (i&(1<<j))
        yolo[ind[j]] = '+';
      else
        yolo[ind[j]] = '-';
    }
    int p1 = poz(s[0]), p2 = poz(yolo);
    if (p1 == p2)
      ++cnt;
  }
  cout<<fixed<<setprecision(10)<<((double)cnt)/(1<<(ind.size()))<<"\n";
}