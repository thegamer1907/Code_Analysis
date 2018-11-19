#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll maxn = 5e5;


string s, t;
ll n, st = 0, e = 0;
int main(){
  cin >> s >> n;
  for(int i = 1; i <= n; i++){
    cin >> t;
    if(t == s){
      cout << "YES";
      return 0;
    }
    if(t[0] == s[1]){
      e = 1;
    }
    if(t[1] == s[0]){
      st = 1;
    }
    if(st == 1 && e == 1){
    cout << "YES";
    return 0;
    }
  }
  cout << "NO";
}
