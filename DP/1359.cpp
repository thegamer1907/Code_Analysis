#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n,start=0,sum,mx=0;
    scanf("%d",&n);
    int a[n+5];
    for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		start+=a[i];
	}  
    for(int i=0;i<n;i++)
    {
    	for(int j=i;j<n;j++)
    	{
    		sum=start;
    		for(int k=i;k<=j;k++)
    		{
    			if(a[k]==1)  sum--;
    			else     sum++; 
			}
			mx=max(mx,sum);
		}
	}
	printf("%d\n",mx);
    return 0;
}