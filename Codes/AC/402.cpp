#include<bits/stdc++.h>
using namespace std;


int k;

int cal(int num)
{
	int ans=0;
	while(num)
	{
		ans+=num%10;
		num/=10;
	}
	return ans;	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>k;
	int cnt=0;
	for(int i=1;;i++)
	{
		if(cal(i)==10)
			cnt++;
		if(cnt==k)
		{
			cout<<i<<endl;
			return 0;
		}
	}
}