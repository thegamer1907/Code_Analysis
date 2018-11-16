#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int n,capacity,in,out,min1,i;
scanf("%d",&n);
capacity =0;
min1 = -1;

for(i=1;i<=n;i++)
{
 scanf("%d%d",&out,&in);
 capacity = capacity - out + in;
  if(min1 <capacity)
 min1 = capacity;
}
printf("\n%d",min1);
return 0;
}
