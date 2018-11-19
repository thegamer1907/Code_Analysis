#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  string pass, *words;
  cin >> pass;
  cin >> n;
  words = new string[n];
  for(int i = 0; i < n; i++) {
    cin >> words[i];
    if((words[i] == pass) || (words[i][0] == pass[1] && words[i][1] == pass[0])) {
      cout << "YES" << endl;
      return 0;
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if((words[i][1] == pass[0] && words[j][0] == pass[1]) || (words[i][0] == pass[1] && words[j][1] == pass[0])) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;
  return 0;
}
