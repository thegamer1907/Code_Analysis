#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string password;
  cin >> password;
  int n;
  cin >> n;
  vector<string> words(n);
  for (int i = 0; i < n; i++) {
    cin >> words[i];
    if (words[i] == password) {
      cout << "YES" << endl;
      return 0;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (words[i][1] == password[0] && words[j][0] == password[1]) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;

  return 0;
}
