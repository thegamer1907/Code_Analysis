#include<bits\stdc++.h>
using namespace std;
int main()
{
      int a,ar[100000],b,br[100000];
      scanf("%d",&a);
      int i;
      for(i=0;i<a;i++)
      {
            scanf("%d",&ar[i]);
      }
      sort(ar,ar+a);
      scanf("%d",&b);
       for(i=0;i<b;i++)
      {
            scanf("%d",&br[i]);
      }
      sort(br,br+b);
      int j,count=0;
      if(a<b)
      {
            for(i=0;i<a;i++)
            {
                  for(j=0;j<b;j++)
                  {
                        if((br[j]==ar[i] || br[j]-1==ar[i] || br[j]+1==ar[i]) && br[j]!=0)
                        {
                              count++;
                              br[j]=0;
                              break;
                        }
                  }
            }
      }
      else
      {
            for(i=0;i<b;i++)
            {
                  //printf("pak");
                  for(j=0;j<a;j++)
                  {
                       // printf("%d\n",ar[j]);
                        
                        if((ar[j]==br[i] || ar[j]-1==br[i] || ar[j]+1==br[i]) && ar[j]!=0)
                        {
                              count++;
                              //printf("%d",count);
                              ar[j]=0;
                              break;
                        }
                  }
            }
      }
      printf("%d\n",count);
      return 0;
}