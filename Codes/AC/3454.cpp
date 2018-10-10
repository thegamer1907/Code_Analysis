#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long LL;
LL summ;
LL judge(LL n)
{
  LL tmp = summ;
  LL cnt = 0;
  while(tmp>0)
  {
    tmp -= n;
    cnt += tmp < 0 ? tmp + n : n;
    if(tmp <= 0) return cnt;
    tmp -= (tmp / 10);
  }
  return summ;
}

LL solve()
{
  LL l = 1,r = summ;
  while(l <= r)
  {
    LL mid = (l + r) / 2;
    if(2 * judge(mid) >= summ)  r = mid - 1;
    else l = mid + 1;
  }
  return l; 
}


int main()
{
  cin >> summ;
  cout << solve() << endl;
}

