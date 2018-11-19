#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <queue>
#include <vector>
using namespace std;
int a,b,c,d,e;
int f[100];
int main()
{
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    a*=5,d*=5,e*=5;
    a%=60;
    d%=60;
    e%=60;
    f[a]++;
    f[b]++;
    f[c]++;
    if(d>e) swap(d,e);
    int ans=0;
    for(int i=d;i<e;i++)ans+=f[i];
    if(ans%3==0)puts("YES");
    else puts("NO");
return 0;
}

  	  	 	   		   	 				 			 	  	