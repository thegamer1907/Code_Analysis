/********************************************************
 *    #####   #    #    ##     ####    #   #    ##      *
 *    #    #  #    #   #  #   #    #    # #    #  #     *
 *    #####   ######  #    #  #          #    #    #    *
 *    #    #  #    #  ######  #  ###     #    ######    *
 *    #    #  #    #  #    #  #    #     #    #    #    *
 *    #####   #    #  #    #   ####      #    #    #    *
 ********************************************************/

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
		int n;
		cin>>n;
		int a[n+1],b[n+1]={0};
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]!=-1)
			{
				b[a[i]]++;
			}
		}
		int ans=1;
		for(int i=1;i<=n;i++)
		{
			if(b[i]==0)
			{
				int cnt=1,temp=i;
				while(a[temp]!=-1)
				{
					cnt++;
					temp=a[temp];
				}
				if(cnt>ans) ans=cnt;
			}
		}
		cout<<ans;
	}
	return 0;
}