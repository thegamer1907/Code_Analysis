#include <bits/stdc++.h>
using namespace std;
char str[110][10], key[10];
int main()
{
  scanf("%s", key);
  int n;
  scanf("%d", &n);
  for(int i = 1; i <= n; i++)
    scanf(" %s", str[i]);
  bool p1 = 0, p2 = 0, p3 = 0, p4 = 0;
  for(int i = 1; i <= n; i++)
  {
    if(str[i][0] == key[0] && str[i][1] == key[1]) p1 = 1;
    if(str[i][0] == key[1]) p3 = 1;
    if(str[i][1] == key[0]) p4 = 1;
  }
  if(p1 || p3 && p4)  printf("YES\n");
  else  printf("NO\n");
}
