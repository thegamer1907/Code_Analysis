# include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair < int, int > pii;

const int N = int(2e5) + 5;
const int inf = (int)1e9 + 7;

int n, m;
string a;
map < string, int > cnt, last;

int main(){
  cin >> n >> m;
  for(int i = 1; i <= n; ++i){
    cin >> a;
    cnt[a]++;
    last[a] = 1;
  }
  for(int i = 1; i <= m; ++i){
    cin >> a;
    cnt[a]++;
    last[a] = 2;
  }
  int both = 0, f1 = 0, f2 = 0;
  for(auto i : cnt){
    if(i.second == 2){
      ++both;
    } else if(i.second == 1){
      if(last[i.first] == 1){
        ++f1;
      } else{
        ++f2;
      }
    }
  }
  f1 += (both + 1) / 2;
  f2 += both / 2;
  if(f1 > f2){
    cout << "YES";
  } else{
    cout << "NO";
  }
  return 0;
}
