#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,m,k;
	cin>>n>>m>>k;

	long long int arr[m];
	queue<long long int>q;
	for(int i=0;i<m;i++){
		cin>>arr[i];
		q.push(arr[i]);
	}

	if(k==1)
	{
		cout<<m<<endl;
		exit(0);
	}	

	long long int ans=0,s=1,e=k,curr=0;

	while(!q.empty())
	{
		long long int a=q.front();
		if(a<=e)
		{
			curr++;
			q.pop();
			continue;
		}

		if(curr)
		{
			e+=curr;
			curr=0;
			ans++;
			continue;
		}

		e=e+k;
		if(a>e)
		{
			long long int time = (a-e)/k;
			if((a-e)%k)time++;
			e+=(time*k);
		}
	}
	if(curr)ans++;
	cout<<ans<<endl;
}