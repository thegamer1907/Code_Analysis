#include <cmath>
#include <stack>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#define mem(a,b) memset(a,0,sizeof(a))
#define fori(a,b) for(int i=a;i<=b;i++)
#define forj(a,b) for(int j=a;j<=b;j++)
#define fork(a,b) for(int k=a;k<=b;k++)
#define ifor(a,b) for(int i=a;i>=b;i--)
#define jfor(a,b) for(int j=a;j>=b;j--)

using namespace std;
typedef long long LL;

int main()
{
    int n,m,max1=0,min1=0;
    scanf("%d %d",&n,&m);
    int a[n];
    fori(0,n-1)
        scanf("%d",&a[i]);
    sort(a,a+n);
    max1=a[n-1]+m;
    while(1)
    {
        if(m==0)
            break;
        m--;
        a[0]++;
        sort(a,a+n);
    }
    min1=a[n-1];
    printf("%d %d\n",min1,max1);
    return 0;
}
  		   	  	 	 	  	 		  	  		 		