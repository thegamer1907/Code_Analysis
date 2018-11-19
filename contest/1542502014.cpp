#include <bits/stdc++.h>

using namespace std;

const int N = 105;

string have[N];
string password;
int n;

int main() {
  cin >> password;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> have[i];
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      string cur = "";
      cur = have[i] + have[j];
      if(cur.find(password) != string::npos) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";
  return 0;
}