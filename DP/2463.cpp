/*input
5 48096
75634 80941
27808 89615
58867 93494
95515 99613
68307 69216
*/
#include<bits/stdc++.h>
#define ll long long
#define inf 1000000007
using namespace std;
int main(){
	ll t,k;
	cin>>t>>k;

	ll int dp[100001], i;

	dp[0]=1;

	for(i=1;i<k;i++) dp[i]=1;
	for(i=k;i<100001;i++){
		dp[i]=dp[i-1]+dp[i-k];
		dp[i]%=inf;
	}

	for(i=1;i<100001;i++){
		dp[i]+=dp[i-1];
		dp[i]%=inf;
	}

	ll int a,b;
	for(i=0;i<t;i++){
		cin>>a>>b;
		cout<<(inf+dp[b]-dp[a-1])%inf<<"\n";
	}
	return 0;
	// rrrrrrrr rrrrrwww rrrrwwwr rrrwwwrr rrwwwrrr rwwwrrrr wwwrrrrr wwwwwwrr wwwrwwwr rwwwwwwr rwwwrwww rrwwwwww
	// 0=1, 1 1 2 3 4 6 8 12 
}