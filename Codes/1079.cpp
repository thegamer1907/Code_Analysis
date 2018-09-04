#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

int N, D;
std::pair<int, int> data[100005];
long long sums[100005];

long long rsq(int i, int j) {
  return sums[j] - sums[i-1];
}

int main() {
  std::cin>>N>>D;
  for (int i = 1; i <= N; ++i)
    std::cin>>data[i].first>>data[i].second;
  std::sort(data+1, data+1+N);

  sums[0] = 0;
  for (int i = 1; i <= N; ++i)
    sums[i] = sums[i-1] + data[i].second;

  long long ans = 0;
  for (int i = 1; i <= N; ++i) {
    int j = i;
    for (int jump = N - i; jump >= 1; jump >>= 1)
      while (j + jump <= N and data[j+jump].first < data[i].first + D)
        j += jump;
    ans = std::max(ans, rsq(i, j));
  }
  std::cout<<ans<<"\n";

  return 0;
}
