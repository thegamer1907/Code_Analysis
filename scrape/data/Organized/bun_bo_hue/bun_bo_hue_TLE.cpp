#include <iostream>

using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    long long xoa = 0;
    long long a[123456];
    for(long long i = 1; i <= m; i++)
      cin >> a[i];
    long long st = 1;
    long long ans = 0;
    while(st <= m){
      ans++;
      long long cur_pos = a[st] - xoa;
      cur_pos %= k;
      if(cur_pos == 0) cur_pos = 5;
      while(cur_pos <= k){
        xoa++;
        st++;
        if(st > m) break;
        cur_pos += a[st] - a[st - 1];
      }
    }
    cout << ans;
    return 0;
}