#include <bits/stdc++.h>
using namespace std;
bool flag = 1;
int h, m, s, t1, t2;
int judge(int t)
{
  if(t1 > t2) swap(t1, t2);
  if(t1 == t || t2 == t)  flag = 0;
  if(t1 < t && t < t2)  return 1;
  else  return 2;
}
int main()
{
  scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
  t1 %= 12, t2 %= 12;
  h %= 12;
  t1 *= 3600, t2 *= 3600;
  int x1 = judge(3600 * h + 60 * m + s), x2 = judge(m * 720 + s * 12), x3 = judge(s * 720);
  if(flag)
  {
    if(x1 == x2 && x1 == x3)  printf("YES\n");
    else  printf("NO\n");
  }
  else  printf("NO\n");
}
