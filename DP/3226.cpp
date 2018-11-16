#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
  int n, b;
  cin >> n >> b;
  vector<int> nums;
  for(int i = 0 ; i < n ; i++) {
    int t;
    cin >> t;
    nums.push_back(t);
  }
  int odd_even_flag = 0;
  vector<int> diff;
  for(int i = 0 ; i < n-1 ; i++) {
    if(nums[i] % 2 == 1) odd_even_flag++;
    else odd_even_flag--;
    if(odd_even_flag == 0) {
      diff.push_back(abs(nums[i+1] - nums[i]));
    }
  }
  sort(diff.begin(), diff.end());
  int ans = 0, sum = 0;
  for(auto element: diff) {
    sum += element;
    if(sum <= b) ans++;
    else break;
  }
  cout << ans << endl;
  return 0;
}
