#include<stdio.h>
struct p{
char pa[3];
}ob[100];
char pass[3];
int func(int i,int j,int n)
{
    int flag=0;
   if(j==0)
   {
       if(ob[i].pa[1]==pass[1])
        {return 1;flag=1;}
   }
   else
   {

    for(int k=0;k<n;++k)
        {
        if(ob[k].pa[0]==pass[1])
            {return 1;flag=1;break;}
        }

   }
   if(flag==0)return 0;
}
int main()
{
    scanf("%s",&pass);

    int n;

    scanf("%d",&n);

    for(int j=0;j<n;++j)
    {
     scanf("%s",&ob[j].pa);
    }
    int x=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<2;++j)
        {
            if(pass[0]==ob[i].pa[j])
            {
                x=func(i,j,n);
                if(x==1){printf("YES\n");break;}
            }
        }
    if(x==1)break;
    }
    if(x==0)printf("NO\n");
    return 0;
}
