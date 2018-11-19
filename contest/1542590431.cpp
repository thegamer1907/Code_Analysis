#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
char s[5];
char t[5];
int main(){
  scanf("%s",s);
  int n;
  scanf("%d\n",&n);
  int a=0;
  for (int i=1;i<=n;i++){
    scanf("%s",t);
    if (t[0]==s[1]) a|=2;
    if (t[1]==s[0]) a|=1;
    if (t[0]==s[0] && t[1]==s[1])a=3;
  }
  if (a==3)printf("YES\n");else printf("NO\n");
  return 0;
}
