#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	char a,b,c,d;
	while(cin>>a>>b)
	{
		int n;
		scanf("%d",&n);
		int flag=0,flag1=0,flag2=0,t=0;
		for(int i=0;i<n;i++)
		{
			cin>>c>>d;
			if(a==d)
			flag1=1;
			if(b==c)
			flag2=1;
			if(c==a&&d==b)
			flag=0;
			if(a==c&&b==d)
			t=1;
			
		}
		if(flag)
		printf("NO\n");
		else if(t)
		printf("YES\n");
		else
		{
			if(flag1&&flag2)
			printf("YES\n");
			else
			printf("NO\n");
		}
		
	 } 
	 return 0;
 } 
 		 		     	  	 	      	  	