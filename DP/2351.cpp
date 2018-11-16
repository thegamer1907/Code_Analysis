#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

string solve(string s) {
  string ans = "";
  for(int i = 0; i < s.length(); i++) {
    if((s[i]-'0')%8 == 0) {
      return ans + s[i];
    }
  }
  for(int i = 0; i < s.length(); i++) {
    for(int j = i+1; j < s.length(); j++) {
      if(((s[i]-'0')*10 + (s[j]-'0'))%8 == 0) {
        return (ans + s[i]) + s[j];
      }
    }
  }
  for(int i = 0; i < s.length(); i++) {
    for(int j = i+1; j < s.length(); j++) {
      for(int k = j+1; k < s.length(); k++) {
        if(((s[i]-'0')*100 + (s[j]-'0')*10 + (s[k]-'0'))%8 == 0) {
          return ((ans + s[i]) + s[j]) + s[k];
        }
      }
    }
  }
  return "";
}

int main() {
  string s;
  cin >> s;
  string ans = solve(s);
  if(ans != "") {
    cout << "YES" << endl << ans << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
