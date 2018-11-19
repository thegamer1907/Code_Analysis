#include <bits\stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
const int maxn=10;

int main()
{
  char s[103][3];
  int n;
  scanf("%s",s[0]);
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    scanf("%s",s[i]);
}
    int flag=0;
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
{
    if(s[i][1]==s[0][0]&&s[j][0]==s[0][1])flag=1;
    if(s[i][0]==s[0][0]&&s[i][1]==s[0][1])flag=1;
    if(s[j][0]==s[0][0]&&s[j][1]==s[0][1])flag=1;
}
if(flag==1)printf("YES\n");
else printf("NO\n");
  return 0;
}
