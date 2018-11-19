#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
  char s[5];
  while(~scanf("%s",s))
  {
   int n;
   scanf("%d",&n);
   char ss[1100][10];
   int t[1100];
   memset(t,0,sizeof(t));
   int flag=0;
   for(int i=0;i<n;i++)
   {
    scanf("%s",&ss[i]);
    if(strcmp(s,ss[i])==0)
     flag=1;
   }
   if(flag==1)
    printf("YES\n");
    else
    {
      int k1,k2;
      k1=k2=0;
      for(int i=0;i<n;i++)
      {
       if(ss[i][1]==s[0])
       {
      //  t[i]=1;
        k1=1;
        break;
       }
      }
      for(int i=0;i<n;i++)
      {
       if(ss[i][0]==s[1])
       {
         k2=1;
         break;
       }
      }
      if(k1+k2==2)
      {
       printf("YES\n");
      }
      else
      {
       printf("NO\n");
      }
    }

  }
  return 0;
}
