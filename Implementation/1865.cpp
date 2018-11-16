#include<cstdio>
#include<iostream>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
   int n;
   scanf("%d",&n);
   int a[210][3];
   for(int i=0;i<n;i++)
       for(int j=0;j<3;j++)
           scanf("%d",&a[i][j]);
   int ans=0;
   for(int i=0;i<3;i++)
   {
       int num=0;
       for(int j=0;j<n;j++)
           num+=a[j][i];
       if(num==0)
        ans++;
   }
   if(ans==3)
    printf("YES\n");
   else
    printf("NO\n");
    return 0;
}
