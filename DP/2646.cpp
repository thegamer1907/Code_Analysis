#include<bits/stdc++.h>
using namespace std;

int k,sum,cnt=0,cur;
int main()
{
	cin>>k;
	for(int i=19;i<=k*10000;i++)
	{
		sum=0;
		cur=i;
		while(cur)
		{
			sum=sum+cur%10;
			cur=cur/10;
		}
		if(sum==10) cnt++;
		if(cnt==k) 
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}