#include <bits/stdc++.h>
using namespace std;

const int MaxN = 1e6 + 6.66;
string str;
int failure[MaxN];

int main() {
  ios::sync_with_stdio(false);
  cin >> str;
  int n = str.size();
  int cur = 0;
  for(int i = 1; i < n; i++) {
    while(cur && str[i] != str[cur]) cur = failure[cur - 1];
    cur = cur + (str[i] == str[cur]);
    failure[i] = cur;
  }
  int ls = cur;
  if(!ls) {
    cout << "Just a legend" << endl;
    return 0;
  }
  cur = 0;
  for(int i = 1; i < n - 1; i++) {
    while(cur && str[i] != str[cur]) cur = failure[cur - 1];
    cur += str[i] == str[cur];
    if(cur == ls) {
      for(int i = 0; i < ls; i++) cout << str[i]; cout << endl;
      return 0;
    }
  }
  if(failure[ls - 1]) 
    for(int i = 0; i < failure[ls - 1]; i++) cout << str[i];
  else cout << "Just a legend";
  cout << endl;
  return 0;
}
