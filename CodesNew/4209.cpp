#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 1000000007
#define pb push_back	
#define mp make_pair		

int main()
{   ios_base::sync_with_stdio(false);
	ll n,q,ans=0,i,temp=0,arr,index;
	cin>>n>>q;
	vector<ll>v(n),pre(n,0);
	for(i=0;i<n;i++)
	{
		cin>>v[i];
	}
	pre[0]=v[0];
	for(i=1;i<n;i++)
	{
		pre[i]+=pre[i-1]+v[i];
		//cout<<pre[i]<<" ";
	}
	while(q--)
	{
		cin>>arr;
		temp+=arr;
		if(temp>=pre[n-1])
		{
			temp=0;
			cout<<n<<'\n';
		}
		else
		{
			if(binary_search(pre.begin(),pre.end(),temp)==0)
			{
				//cout<<"case 1";
				index=lower_bound(pre.begin(),pre.end(),temp)-pre.begin();
				//cout<<index<<" ";
				cout<<n-index<<'\n';
			}
			else
			{
			//	cout<<"case2";
				index=lower_bound(pre.begin(),pre.end(),temp)-pre.begin();
				cout<<n-index-1<<'\n';
			}
		}
	}
	
}

