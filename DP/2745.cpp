#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define N 110
#define INF 1e18
#define mod 1000000007

using namespace std;




int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lli n,ans;
	cin>>n;
	
	ans = n/100;
	n %= 100;
	ans += (n/20);
	n %= 20;
	ans += (n/10);
	n %= 10;
	ans += (n/5);
	n %= 5;
	ans += n;
	
	cout<<ans<<endl;
	return 0;
}