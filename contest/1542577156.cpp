// Template version 1.1.
// 2017.9.25
#include<bits/stdc++.h>
#define PB push_back
#define EPB emplace_back
#define F first
#define S second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
int ML = 19;
int n, m;
int a, b;
string all[100];
bool num[205][(1 << 20) + 10];
string leftt[205];
string rightt[205];

int main() {
  cin >> n;
  for(int i = 0; i < n; ++i) 
    cin >> all[i];
  for(int i = 0; i < n; ++i)
    for(int j = 1; j <= min((int)all[i].length(), ML); ++j)
      for(int k = 0; k + j <= all[i].length(); ++k) {
        string tmp = all[i].substr(k, j);
        num[i][stoi(tmp, nullptr, 2) + (1 << j)] = true;
      }

  for(int i = 0; i < n; ++i) {
    int ss = min(ML, (int)all[i].length());
    leftt[i] = all[i].substr(0, min(ML, ss));
    rightt[i] = all[i].substr((int)all[i].length() - ss, ss);
  }

  cin >> m;
  for(int i = 0; i < m; ++i) {
    string newstr;
    string newll, newrr;
    cin >> a >> b;  
    a--; b--;
    for(int j = 2; j <= (1 << (ML + 1)); ++j)
      num[n + i][j] = num[a][j] || num[b][j];

    newstr = rightt[a] + leftt[b];
    for(int j = 1; j <= min((int)newstr.length(), ML); ++j)
      for(int k = 0; k + j <= newstr.length(); ++k) {
        string tmp = newstr.substr(k, j);
        num[n + i][stoi(tmp, nullptr, 2) + (1 << j)] = true;
      }

    for(int j = 2; j <= (1 << (ML + 1)); ++j)
      if (num[n + i][j] == false) {
        for(int l = 1; l <= ML; ++l)
          if ((j >> l) == 1) {
            cout << l-1 << endl;
            break;
          }
        break;
      }

    int ne;
    newll = leftt[a] + leftt[b];
    newrr = rightt[a] + rightt[b];
    ne = min(ML, (int)newll.length());
    leftt[n+i] = newll.substr(0, min(ML, ne));
    ne = min(ML, (int)newrr.length());
    rightt[n+i] = newrr.substr((int)newrr.length() - ne, ne);
  }

  // for(int i = 0; i < n; ++i)
    // for(int j = 0; j < 1000; ++j)
      // if (num[i][j]) {
        // cout << " i: " << i << " j: " << j << endl;
      // }
  // for(int i = 0; i < n; ++i)
    // cout << leftt[i] << ' ' << rightt[i] << endl;

  return 0;
}
