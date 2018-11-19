#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
#include<complex>
#include<queue>
#include<stack>
#include<cmath>
#include<set>
#include<vector>
using namespace std;
char T[5],ch[5];
int main(){
  scanf("%s",T);
  int n;
  bool fl1=0,fl2=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%s",ch);
    if(ch[0]==T[0] && ch[1]==T[1]) printf("YES"),exit(0);
    if(ch[0]==T[1]) fl1=1;
    if(ch[1]==T[0]) fl2=1;
  }
  if(fl1 && fl2) printf("YES");
  else printf("NO");
  return 0;
}
