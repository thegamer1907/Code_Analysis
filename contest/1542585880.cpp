
# include <bits/stdc++.h>

using namespace std;

#define y1 qwetqwuetquwet

typedef long long ll;
typedef long double ld;

const int inf = (int)1e9 + 7;
const int add = 4 * 501 * 501;

string s, t;
int n, m, k;

int main(){
  cin >> s[0] >> s[1];
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> t[0] >> t[1];
    if(t[1] == s[0])
      k = 1;
    if(t[0] == s[1])
      m = 1;
    if(t[0] == s[0] && t[1] == s[1]){
      k = 1, m = 1;
    }
  }
  if(m == 1 && k == 1){
    cout << "YES";
  }
  else
    cout << "NO";
  return 0;
}
