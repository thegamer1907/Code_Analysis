#include<iostream>
#include<cmath>
#include<stdio.h>
#include<map>
using namespace std;
map<string,int>a;
map<string,int>b;
int main()
{
	int n,m;
	string s;
	while(~scanf("%d%d",&n,&m))
	{
		a.clear();
		b.clear();
		int cnt1=0,cnt2=0,cnt3=0;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			if(a[s]==0)
			{
				cnt1++;
				a[s]++;
			}
		}
		for(int i=0;i<m;i++)
		{
			cin>>s;
			if(b[s]==0)
			{
				cnt2++;
				b[s]++;
			}
			if(a[s]!=0)
			{
				cnt3++;
			}
		}
		if(cnt3%2==0)
		{
			if(cnt1>cnt2)
			{
				printf("YES\n");
			}
			else printf("NO\n");
		}
		else
		{
			if(cnt1>=cnt2)
			{
				printf("YES\n");
			}
			else printf("NO\n");
		}
		
	}
}