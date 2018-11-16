#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> v[10000005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int n,t;
	cin>>n>>t;
	int a[n-1];
	for(int i=1;i<n;i++){
	cin>>a[i];
	v[i].push_back(i+a[i]);
	}
	int flag=0;
	queue<int> q;
	q.push(1);
	while(!q.empty())
	{
		int z=q.front();
		q.pop();
		if(t==z)
		{
			flag=1;
			break;
		}
		else if(z>t)
		break;
		q.push(v[z][0]);
	}
		if(flag==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}