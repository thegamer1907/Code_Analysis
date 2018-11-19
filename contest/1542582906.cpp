#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int nn;
  string bark;
  cin >> bark >> nn;
  vector<string> ss;
  for (int i = 0; i < nn; i++) {
    string b;
    cin >> b;
    ss.push_back(b);
  }
  for (int i = 0; i < nn; i++) {
    for (int j = 0; j < nn; j++) {
      string can = ss[i] + ss[j];
      if (can.find(bark) != string::npos) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
        cout << "NO" << endl;

  


  return 0;
}
