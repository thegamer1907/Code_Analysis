#include<bits/stdc++.h>
#define MAXN 5000

using namespace std;

int n,m;

int main()
{
	scanf("%d",&n);
	int Cnt=0,Now,x;
	while(1)
	{
		for(int i=10;;i++)
		{
			Now=0;
			x=i;
			while(x)
			{
				Now+=x%10;
				x/=10;
			}
			if(Now==10) Cnt++;
			if(Cnt==n)
			{
				printf("%d",i);
				return 0;
			}
		}
		
	}
}