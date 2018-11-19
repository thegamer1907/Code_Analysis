#include<bits/stdc++.h>
using namespace std;
char c[9],d[101][9],n;
int cmp(char *c,char *d){for (int i=0;i<strlen(c);i++) if (c[i]!=d[i]) return 0;return 1;}
int main()
{
int i,j;
scanf("%s%d",c,&n);
for (i=1;i<=n;i++) 
  {
  scanf("%s",d[i]);
  if (cmp(c,d[i])) return puts("YES"),0;
  }
for (i=1;i<=n;i++) for (j=1;j<=n;j++)
  {
  if (d[i][0]==c[1]&&d[j][1]==c[0]) return puts("YES"),0;
  }
puts("NO");
}