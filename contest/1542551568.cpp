#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;
int Maxn=105;
int main()
{
	int n;
	string b;
	string a[Maxn];
	cin>>b>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==b) 
		{
			printf("YES\n");
			return 0;
		}
		if(a[i][1]==b[0]) 
		{
			for(int j=0;j<n;j++)
			{
				if(a[j][0]==b[1])
				{
					printf("YES\n");
					return 0;
				}
			}
		}
	}
	printf("NO\n");
}
      	  				    			   			  	 	