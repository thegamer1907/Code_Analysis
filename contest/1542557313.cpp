#include <stdio.h>
#include <string.h>
#include<iostream>

using namespace std;
int main()
{
	char a[2];
	char b[105][2];
	int ok=0;
	scanf("%s",a);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",b[i]);	
	}
	for(int i=0;i<n;i++)
	{
		if(a[0] == b[i][0] && a[1] == b[i][1])
		{
			ok=1;
			break;
		}
	}
//	cout << ok << endl;
	int g=0,l=0;
	for(int i=0;i<n;i++)
	{
		if(b[i][1]==a[0])
		{
			g=1;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(b[i][0]==a[1])
		{
			l=1;
		}
	}
//	cout << l << " " << g << endl;
//	cout << ok << endl; 
	if(l==1&&g==1)
	{
		printf("YES\n");
	}
	else if(ok==1) 
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
		 		 	 			 	 		 	   	  		 	 	