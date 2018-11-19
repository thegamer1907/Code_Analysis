# include <bits/stdc++.h>

using namespace std;

typedef long long lin;
typedef long double ld;
typedef pair < int, int > pii;

const int N = int(5e5) + 5;
const int inf = (int)1e9 + 7;

string s, x[N];
int n;
int fa, fb, f;

int main(){
  cin >> s >> n;
  for(int i = 1; i <= n; ++i){
    cin >> x[i];
    if(x[i] == s){
      cout << "YES\n";
      return 0;
    }
  }
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= n; ++j){
      if(string(1, x[i][1]) + x[j][0] == s){
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO";
  return 0;
}
