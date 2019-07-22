// We only fail when we stop trying
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int m;
long long n, k;
long long arr[N];

int main()
{
  ios::sync_with_stdio(false);
  cin >> n >> m >> k;
  for(int i = 0 ; i < m ; i++)
    cin >> arr[i];
  int r = k;
  int idx = 0;
  int ans = 0;
  while(idx < m){
//    cout << r << endl;
    if(r < arr[idx]){
//      cout << "done" << endl;
      long long x = (arr[idx] - r + k - 1) / k;
      r += k * x;
    }
    int add = 0;
    while(idx < m && arr[idx] <= r){
      idx++;
      add++;
    }
    r += add;
    ans++;
  }
  cout << ans << endl;
  return 0;
}