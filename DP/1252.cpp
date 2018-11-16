 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define pb push_back
 #define mp make_pair
 #define sz(a) (ll)((a).size())
 #define MOD 1000000007
 
 int main()
 {
 	ll n; ll ct1=0;ll ct0=0;
 	cin>>n; bool arr[105];
 	for (int i = 0; i < n; ++i){
 		cin>>arr[i];if(arr[i])ct1++;else ct0++;}

	ll ma=-999999999;

	ll dp[105][105]={0};

 	for(ll i=0;i<n;i++){
 		dp[i][i]=ct1+((arr[i])?-1:+1);ma=max(ma,dp[i][i]);}

 	for (int i = 0; i < n; ++i)
 	{
 		for (int j = i+1; j < n; ++j)
 		{
 			dp[i][j]=dp[i][j-1]+((arr[j])?-1:+1);ma=max(ma,dp[i][j]);
 		}
 	}
 	
 	cout<<ma<<"\n";
 	return 0;
 }