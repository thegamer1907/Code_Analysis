/*input
3 2
1 3
2 3
4 4

*/
/*
  ####   #    #    ##    #####    ####           #    #
 #       #    #   #  #   #    #  #    #          #    #
  ####   ######  #    #  #    #  #    #          #    #
      #  #    #  ######  #    #  #    #          # ## #
 #    #  #    #  #    #  #    #  #    #          ##  ##
  ####   #    #  #    #  #####    ####  #######  #    #

*/
#include<bits/stdc++.h>
#define lld          long long int
#define pb          push_back
#define ppb         pop_back
#define	endl		'\n'
#define mii         map<lld,lld>
#define msi         map<string,lld>
#define mis         map<lld, string>
#define mpi         map<pair<lld ,lld >,lld >
#define pii         pair<lld,lld>
#define vi          vector<lld>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (lld)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define what_is(x)  cerr << #x << " is " << x << endl;
using namespace std;
#define N  100005
lld dp[N];
void solve()
{
	lld k,t;
	cin>>t>>k;
	dp[0]=1;
	for(lld i=1;i<N;i++)
	{
		dp[i]=1;
	}
	for(lld i=k;i<N;i++)
	{
		dp[i]=(dp[i-1]%hell+dp[i-k]%hell)%hell;
	}
	for(lld i=1;i<N;i++)
	{
		dp[i]=(dp[i]%hell+dp[i-1]%hell)%hell;
	}
	while(t--)
	{
		lld a,b;
		cin>>a>>b;
		cout<<(dp[b]-dp[a-1]+hell)%hell<<endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tests=1;
	while(tests--)
	{
		solve();
	}
}