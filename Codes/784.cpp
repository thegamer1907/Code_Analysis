#include <iostream>

typedef long long ll;

ll N, K;

int solve(ll x) {
  //std::cout<<x<<"\n";
  for (int i = N; i >= 0; --i) {
    if (x == (1LL << i))
      return i;
    else if ((1LL << i) < x)
      return solve(x - (1LL << i));
  }
  return 1;
}

int main() {
  std::cin>>N>>K;
  std::cout<<solve(K) + 1<<"\n";

  return 0;
}
