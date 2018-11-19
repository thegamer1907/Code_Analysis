#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int n;
char psw[3],wrd[102][3];
bool ans;
int main()
{scanf("%s%d",psw,&n);
 for(int i=1;i<=n;++i)
  scanf("%s",wrd[i]);
 for(int i=1;i<=n;++i)
 {if(psw[0]==wrd[i][0]&&psw[1]==wrd[i][1])
   ans=true;
  for(int j=1;j<=n;++j)
   if(psw[0]==wrd[i][1]&&psw[1]==wrd[j][0])
    ans=true;
 }
 if(ans)
  printf("YES\n");
 else
  printf("NO\n");
 return 0;
}
