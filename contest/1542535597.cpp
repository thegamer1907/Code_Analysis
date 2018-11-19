#include <bits/stdc++.h>
#define mp make_pair
#define mt make_tuple
#define ll long long

using namespace std;

int main() {
  bool l1 = 0, l2 = 0;
  int n;
  string pass;
  cin >> pass >> n;
  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    if (str == pass){
      puts("YES");
      return 0;
    }
    if (str[0] == pass[1]) l1 = 1;
    if (str[1] == pass[0]) l2 = 1;
  }
  if (l1 && l2) {
    puts("YES");
    return 0;
  }
  puts("NO");
  return 0;
}