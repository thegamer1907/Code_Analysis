#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int,int>;

const int N = 3e5 + 5;
const int mod = 1e9 + 7;

bool sod(int x){
  int ret = 0;
  while(x){
    ret += (x%10);
    x/=10;
  }
  return ret == 10;
}
int main(){

  int k;
  cin >> k;

  int cnt = 0;
  for(int i = 1; ;i++){
    k -= sod(i);
    if(!k){
      cout << i << "\n";
      return 0;
    }
  }




  return 0;
}

