#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string s;
ll n;

inline bool check(int i) {
  int val = 0;
  while(i>0) {
    val += i%10;
    i /= 10;
  }
  return (val==10);
}

int main() {
  cin >> n;
  int i;
  for (i = 1; n > 0; i++) {
    n -= check(i);
  }
  cout << i-1 << endl;
}