#include<bits/stdc++.h>
using namespace std;
int f[10010][15],k;
int main()
{
	f[0][0]=1;
	scanf("%d",&k);
	for(int i=1;i<=11000000;i++)
	{
		int t=i,cnt=0;
		while(t)
		{
			cnt+=t%10;
			t/=10;
		}
		if(cnt==10)
			k--;
		if(k==0)
		{
			printf("%d\n",i);
			break;
		}
	}

}