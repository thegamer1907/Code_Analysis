#include <cstdio>
#include <iostream>
using namespace std;

char s[105][4], tar[4];

int main() {
  scanf("%s", tar + 1);
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i ++)
    scanf("%s", s[i] + 1);
  for (int i = 1; i <= n; i ++)
    if (s[i][1] == tar[1] && s[i][2] == tar[2])
      return puts("YES"), 0;
  for (int i = 1; i <= n; i ++)
    for (int j = 1; j <= n; j ++)
      if (s[i][2] == tar[1] && s[j][1] == tar[2]) 
	return puts("YES"), 0;
  puts("NO");
  return 0;
}
