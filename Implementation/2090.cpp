#include <cstdio>
#include <iostream>


using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
   int i,j,k,sumi=0,sumj=0,sumk=0;
   for(int m=0;m<n;m++)
   {
       scanf("%d%d%d",&i,&j,&k);
       sumi+=i;
       sumj+=j;
       sumk+=k;
   }
   if(sumi==0&&sumj==0&&sumk==0)
        printf("YES");
        else
        printf("NO");
}