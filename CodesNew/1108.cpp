#pragma GCC optimize(3)
#include<bits/stdc++.h>
using namespace std;
const long long llINF = 9223372036854775807;
const int INF = 2147483647;
const int maxn = 1e3 + 7;
const int maxm = 1e5 + 7;
const int mod = 998244353;
long long n;
long long ans = llINF;
bool check(long long m)
{
  long long tmp = n, sum = 0;
  while (tmp)
  {
    if (tmp < m)
    {
      sum += tmp;
      break;;
    }
    sum += m;
    tmp -= m;
    tmp -= tmp / 10;
  }
  if (sum + sum >= n)
  {
    ans = min(ans, m);
    return true;
  }
  return false;
}
int main(int argc, char const *argv[])
{
  scanf("%lld", &n);
  long long l = 1, r = n;
  while (l <= r)
  {
    long long mid = (l + r) >> 1;
    if (check(mid))
      r = mid - 1;
    else
      l = mid + 1;
  }
  printf("%lld\n", ans);
  return 0;
}