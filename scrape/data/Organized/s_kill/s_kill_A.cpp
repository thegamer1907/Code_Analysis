#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair

ll n,m,k,arr[1000001];
vector<ll> crr;
string s;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,y;
	cin>>n>>m>>k;
	for (int i = 0; i < m; ++i)
	{
		cin>>arr[i];
		crr.pb(arr[i]);
	}

	vector<ll>:: iterator it;
	ll u=0,del=0,p=k,am=0;
	// while(u!=m)
	// {
	// 	it=upper_bound(crr.begin(),crr.end(),p);
	// 	del=it-crr.begin()-ld;
	// 	ld=it-crr.begin();
	// 	if(del==0)
	// 	{
	// 		p+=k;
	// 	}
	// 	else
	// 	{
	// 		p+=del;
	// 		am++;
	// 	}
	// 	u+=del;
	// }
	ll page=0,shift=0,ld=1;
	while(u!=m)
	{
		del=0;
		if((arr[u]-shift)/k==page || ((arr[u]-shift)%k==0 && (arr[u]-shift)/k==page+1))
		{
			//cout<<"1 ";
			while( ( (arr[u]-shift)/k==page && (arr[u]-shift)%k!=0) || ((arr[u]-shift)%k==0 && (arr[u]-shift)/k==page+1))
			{
				del++;
				u++;
				if(u==m)
					break;
			}
			//cout<<del<<endl;
			shift+=del;
			am++;
		}
		else
		{
			//cout<<"2 ";
			if((arr[u]-shift)%k==0)
			{
				page=(arr[u]-shift)/k;
				page--;
			}
			else
			{
				page=(arr[u]-shift)/k;
			}

		}
	}
	cout<<am;

	return 0;
}