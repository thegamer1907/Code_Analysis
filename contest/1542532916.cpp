/* ****devACE**** */

#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;

#define N  100005

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		int n,k,i,j;
		cin>>n>>k;
		set<int> a;
		for(i=0;i<n;i++)
		{
			int num,val=0;
			for(j=0;j<k;j++)
			{
				cin>>num;
				val+=((1<<(j))*num);
			}
			a.insert(val);
		}

		//for(auto i:a)cout<<i<<" "; cout<<"\n";

		for(auto i:a)
		{
			for(auto j:a)
			{
				if((i&j)==0)
				{
					cout<<"Yes"; return 0;
				}
			}
		}
		cout<<"NO";
		
	}
	return 0;
}