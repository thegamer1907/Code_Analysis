#include<iostream>
#include<vector>
using namespace std;

int solve(int n, vector<int> &font_size, vector<int> &rent_cost) {
  static const int INF = 2147483647 / 2;
  vector<int> dp_duo(n, INF), dp_tri(n, INF);
  for(int i = 0 ; i < n ; i++) {
    for(int j = 0 ; j < i ; j++) {
      if(font_size[j] < font_size[i]
         && dp_duo[i] > rent_cost[i] + rent_cost[j]) {
        dp_duo[i] = rent_cost[i] + rent_cost[j];
      }
    }
  }
  for(int i = 0 ; i < n ; i++) {
    for(int j = 0 ; j < i ; j++) {
      if(font_size[j] < font_size[i]
         && dp_tri[i] > dp_duo[j] + rent_cost[i]) {
        dp_tri[i] = dp_duo[j] + rent_cost[i];
      }
    }
  }
  int ans = -1;
  for(int i = 0 ; i < n ; i++) {
    if(dp_tri[i] != INF && (ans == -1 || ans > dp_tri[i])) {
      ans = dp_tri[i];
    }
  }
  return ans;
}

int main() {
  int n;
  vector<int> input1, input2;
  cin >> n;
  for(int i = 0 ; i < n ; i++) {
    int t;
    cin >> t;
    input1.push_back(t);
  }
  for(int i = 0 ; i < n ; i++) {
    int t;
    cin >> t;
    input2.push_back(t);
  }
  int ans = solve(n, input1, input2);
  cout << ans << endl;
  return 0;
}
