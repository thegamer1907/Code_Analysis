#include<stdio.h>
int main()
{
int n,i,x,y,z,X=0,Y=0,Z=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d%d%d",&x,&y,&z);
X+=x;
Y+=y;
Z+=z;
}
if(X==0 && Y==0 && Z==0)
{
printf("YES\n");
}
else
{
printf("NO\n");
}
}