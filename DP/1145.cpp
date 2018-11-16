#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define ll long long
#define endl '\n'
#define len(s) (s).length()
#define boost ios::sync_with_stdio(0); cin.tie(0);

int dp[110][110];

int main(){

	int n;
	cin>>n;
	int a[n],i,j;
	for(i = 0 ; i < n ; ++i)
		cin>>a[i];

	int mx = -100000 , id1,id2;

	for(i = 0 ; i < n ; ++i){
		for(j = i ; j  < n ; ++j)
		{
			if(a[j])
				dp[i][j] = dp[i][j-1] -1;
			else dp[i][j] = dp[i][j-1] + 1;

			if(dp[i][j]>=mx){
				mx = dp[i][j];
				id1 = i;
				id2 = j;
			}
			//cout<<dp[i][j]<<" ";
		}
		//cout<<endl;
	}

	for(i = id1 ; i <= id2 ; ++i){
		a[i] = !a[i];
	}
	int ans = 0;
	for(i = 0 ; i < n ; ++i)
		if(a[i])
			ans++;

	cout<<ans<<endl;

}