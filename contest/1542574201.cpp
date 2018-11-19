#include<bits/stdc++.h>
using namespace std;
vector < long long > vec[200000];
int main()
{
	long long sum1=0,i,flag=0, j, k, n,num,maxi=1000000,index, cnt[4]={0};
	long long taken=0, endflag=0;
	long long tp=0;
	scanf("%lld %lld",&n, &k);
	for(i=0;i<n;i++)
	{
		sum1=0;
		for(j=0;j<k;j++)
		{
			scanf("%lld",&num);
			vec[i].push_back(num);
			sum1=sum1+num;
		}
		if(sum1<=maxi)
		{maxi=sum1;index=i;}
	}

	for(j=0;j<k;j++)
		cnt[j]=cnt[j]+vec[index][j];
	taken=1;
	for(j=0;j<k;j++)
	{
		if(cnt[j]==0)
			tp++;
	}
	if(tp==k)
	{printf("YES\n");return 0;}

	for(i=0;i<n;i++)
	{
		if(i==index)
			continue;
		flag=0;
		endflag=0;
		for(j=0;j<k;j++)
		{
			if(cnt[j]+vec[i][j]>(taken+1)/2)
			{flag=1;break;}
		}
		if(flag==0)
		{
			for(j=0;j<k;j++)
				cnt[j]+=vec[i][j];
			taken++;
			for(j=0;j<k;j++)
			{
				if(cnt[j]>taken/2)
				{endflag=1;printf("dsdsf\n");break;}
			}
		}
		if(flag==0 && endflag==0)
		{printf("YES\n");return 0;}
		
	}
	printf("NO\n");
	return 0;
}

