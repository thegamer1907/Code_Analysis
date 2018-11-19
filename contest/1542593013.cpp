#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int, int>;
using vi = vector<int>;
using vii = vector<ii>;
using si = pair<string, int>;
#define fora(i, n) for(int i = 0; i <n; ++i)

int main(int argc, char const *argv[]) {
  string pw;
  vector<string> words;
  cin >> pw;
  int n;
  cin >> n;
  fora(i, n) {
    string w;
    cin >> w;
    words.push_back(w);
    if (w == pw) {
      cout << "YES" << endl;
      return 0;
    }
  }
  for (string w : words) {
    if (w[1] == pw[0]) {
      for (string v : words) {
        if (v[0] == pw[1]) {
          cout << "YES" << endl;
          return 0;
        }
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
