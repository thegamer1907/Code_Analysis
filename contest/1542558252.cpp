#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  string password; cin >> password;
  int n; cin >> n;
  vector<string> words(n);

  bool first = false, second = false;
  for (int i = 0; i < n; ++i) {
    cin >> words[i];
    if (words[i][0] == password[1]) {
      second = true;
    }
    if (words[i][1] == password[0]) {
      first = true;
    }
    if (words[i] == password || (first && second)) {
      puts("YES");
      return 0;
    }
  }
  puts("NO");
  return 0;
}
