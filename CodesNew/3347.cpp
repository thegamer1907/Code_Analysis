#include <iostream>
#include <stdio.h>
#include<algorithm>
#include<string>
#include <math.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,m,maxx,x,minn,i,a[100010];
    scanf("%d%d",&n,&m);
    x=m;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        x+=a[i];
    }
    sort(a,a+n,cmp);
    maxx=a[0]+m;
    if(x%n)
        minn=max(x/n+1,a[0]);
    else
        minn=max(x/n,a[0]);
    printf("%d %d\n",minn,maxx);
    return 0;
}
  							 	 		   	  	      	 	