#include<stdio.h>
int main()
{
   int i,j,k,n,m,a[1005],mmax,ans1,ans2;
   scanf("%d%d",&n,&m);
   mmax=0;
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]>mmax)
       mmax=a[i];
   }
       ans2=mmax+m;
   for(i=1;i<=n;i++)
   {
       if(!m)
       break;
       if(a[i]+m<=mmax)
       {
           a[i]+=m;
           m=0;
       }
       else
      {
          m-=(mmax-a[i]);
           a[i]=mmax;
      }
       //printf("%d\n",mmax);
   }
    ans1=mmax;
   if(m)
   {
       ans1+=m/n;
       if(m%n)
       ans1++;
   }
   printf("%d %d\n",ans1,ans2);
    
    return 0;
}