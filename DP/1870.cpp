#include <iostream>

using namespace std;

int main() {
  string a;
  cin >> a;
  int b = a.find("AB");
  int c = a.find("BA", b + 2);
  int d = a.find("BA");
  int g = a.find("AB", d + 2);
  if (b != -1 && c != -1 || d != -1 && g != -1) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}