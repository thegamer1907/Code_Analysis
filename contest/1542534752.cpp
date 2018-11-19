#include<iostream>
using namespace std;
int prob[16+10];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		int temp=0;
		for(int j=0;j<k;j++)
		{
			int p;
			cin>>p;
			temp|=p;
			if(j<k-1)
				temp<<=1;
		}
		prob[temp]=1;
	}
	int all=1;
	while(k--)
		all<<=1;
	all--;
	if(prob[0]==1)
	{
		cout<<"YES";
		return 0;
	}
	for(int i=0;i<=14;i++)
		for(int j=i+1;j<=15;j++)
		{
			if((i&j)==0&&prob[i]==1&&prob[j]==1)
			{
				cout<<"YES";
				return 0;
			}
		}
	cout<<"NO";
	
	return 0;
}