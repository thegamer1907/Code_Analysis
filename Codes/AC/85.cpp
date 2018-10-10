/* AKSHAT SHARMA */
#include <iostream>
#include <bits/stdc++.h>
#define IOS  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define mp   make_pair
#define pb   push_back
#define F    first
#define S    second
#define ll   long long
#define li   long int
#define MOD  1000000007
#define MAX  1000000001
#define rep(i,a,b) for(i=a;i<b;i++)
#define reqp(i,a,b) for(i=a;i<=b;i++)
#define ren for(i=0;i<n;i++)
#define ALL(a)  (a).begin(),(a).end()
using namespace std;


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input_file.txt", "r", stdin);
	//freopen("output_file.txt", "w", stdout);
	#endif
	ll i,j,k,l,n,test_case,tsum=0,ans=0,cnt=0;
	test_case=1;
	//cin>>test_case;
	while(test_case--){
		vector<li>vec;
		cin>>n;
		ll arr[n];
		ren{
			cin>>arr[i];
			tsum+=arr[i];
		}
		ll dp[n];
		if(tsum==0){
			ren{
				if(i==0)dp[i]=arr[i];
				else dp[i]=dp[i-1]+arr[i];
				if(dp[i]==0)cnt++;				
			}
			cnt--;
			if(cnt<2)cout<<"0";
			else cout<<1ll*cnt*(cnt-1)/2;
			return 0;
		}
		
		ren{
			if(i==0)dp[i]=arr[i];
			else dp[i]=dp[i-1]+arr[i];

			if(3*dp[i]==tsum)vec.pb(0);
			else if(3*dp[i]==2*tsum)vec.pb(1);
		}
		rep(i,0,vec.size()){
			if(vec[i]==0)
				cnt++;
			if(vec[i]==1){
				ans+=cnt;
			}
		}
		cout<<ans;



	}
	
	return 0;
}