#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdlib>
using namespace std;
char s[110];
char a[110][2];
int n;
int main()
{
  scanf("%s",s+1);
  cin>>n;
  for(int i=1;i<=n;i++) scanf("%s",a[i]+1);
  int t=0;
  for(int i=1;i<=n;i++) if(a[i][1]==s[1] && a[i][2]==s[2]) t=1;
  for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
      if(a[i][2]==s[1] && a[j][1]==s[2]) t=1;
  if(t==1) printf("YES\n");
  else printf("NO\n");
  return 0;
}
