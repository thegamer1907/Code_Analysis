#include <iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    char c[100000];
    int a,b,i,j;
   scanf("%d%d",&a,&b);
   scanf("%s",c);
   int c1=strlen(c);
   for(i=1;i<=b;i++)
   {
       for(j=0;j<=c1-2;j++)
        if(c[j+1]>c[j])
       {
           char d=c[j+1];
           c[j+1]=c[j];
           c[j]=d;
           j++;
       }
   }
   printf("%s",c);
}
