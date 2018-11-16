#include <bits/stdc++.h>
const int MOD = 1000000007;
using namespace std;
int C(int n, int k){
  int res = 1;
  for(int i = 1;i <= k;i++)
    res = res * (n - i + 1) / i;
  return res;
}

int main(){
  string a, b;
  cin >> a >> b;
  int x1, x2;
  x1 = x2 = 0;
  int cnt = 0;
  for(int i = 0;i < a.size();i++)
    x1 += (a[i] == '+' ? 1 : -1);
  for(int i = 0;i < a.size();i++)
    if(b[i] != '?')
      x2 += (b[i] == '+' ? 1 : -1);
    else
      cnt++;
  int diff = (x1 - x2);
  if(abs(diff) > cnt){
    cout << 0;
  }else{
    cout << fixed << setprecision(9) << 1.0 * C(cnt, (cnt + diff) / 2) / (1 << cnt);
  }
}