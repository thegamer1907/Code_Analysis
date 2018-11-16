#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
#include <array>
#include <algorithm>
#define ll long long

using namespace std;

string x(string& s) {
  for (int i = 0; i < s.length() - 1; i++) {
    if (s[i] == 'B' && s[i+1] == 'G') {
      s[i] = 'G';
      s[i+1] = 'B';
      i++;
    }
  }
  return s;
}

int main() {
  int a,b;
  cin >> a >> b;
  string s;
  cin >> s;

  for (int i = 0; i < b; i++) {
    x(s);
  }
  cout << s << endl;
  return 0;

}
