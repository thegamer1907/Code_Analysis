#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n; cin >> n;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; ++i) cin >> arr[i];
  vector<int> ones(n, 0), zeros(n, 0);
  zeros[n-1] = (arr[n-1] == 0);
  ones[n-1] = (arr[n-1] == 1);
  for (int i = n-2; i >= 0; --i) {
    if (arr[i] == 0) {
      ones[i] = ones[i+1];
      zeros[i] = zeros[i+1] + 1;
    } else {
      ones[i] = ones[i+1] + 1;
      zeros[i] = zeros[i+1];
    }
  }
  int answer = 0;
  for (int i = 0; i < n; ++i)
    for (int j = i; j < n; ++j) {
      int local = ones[0] - ones[i];
      local += zeros[i];
      if (j + 1 < n) {
	local -= zeros[j+1];
	local += ones[j+1];
      }
      answer = max(answer, local);
    }
  cout << answer << endl;
}