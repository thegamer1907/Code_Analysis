#include <bits/stdc++.h>

using namespace std;

#define fastio iostream::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main(){
  long long n, m, k;

  cin >> n >> m >> k;

  vector<long long> nums(m, 0LL);
  for (int i = 0; i < m; i++){
    cin >> nums[i];
  }

  sort(nums.begin(), nums.end());

  long long ans = 0;
  long long last = 0;
  long long target = k;


  while (last < m){

    long long x = lower_bound(nums.begin(), nums.end(), target + 1LL) - nums.begin() - last;
    if (x > 0LL){
      ans++;
      last += x;
      target += x;
    }
    else
    {
      target += ((nums[last] - target - 1) / k + 1) * k ;
    }
    
  }

  cout << ans << endl;
  
  return 0;
}