#include <bits/stdc++.h>
using namespace std;

int main()
{
    map< long long int,map<long long int,long long int> > mp;
	long long int N,K,ans=0,arr[1990000];
	cin>>N>>K;
	for(int A=1;A<=N;A++)
	cin>>arr[A];
	for(int B=1;B<=N;B++)
	{
		if(arr[B]%K==0)
		mp[arr[B]][3]+=mp[arr[B]/K][2],
		mp[arr[B]][2]+=mp[arr[B]/K][1];
		mp[arr[B]][1]=1+mp[arr[B]][1];	
	}
	for(int B=1;B<=N;B++)
	{
		if(mp[arr[B]][1]!=-1)
		{
			ans+=mp[arr[B]][3];
			mp[arr[B]][1]=-1;
		}
	}
	cout<<ans;
	return 0;
}