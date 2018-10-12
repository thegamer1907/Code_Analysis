#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define INF 1e18
#define N 100010
#define tol 1e-12
#define P pair
#define mk make_pair
#define rep(i,lower,upper) for(i=lower;i<=upper;i++)
#define repr(i,upper,lower) for(i=upper;i>=lower;i--)
 
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	lli i,j,k,n,m;
	cin>>n;
	
	lli s[n+1];
	s[0] = 0;
	rep(i,1,n)
		cin>>s[i];
		
	if(n == 1)
	{
		cout<<"1"<<endl;
		return 0;
	}
	
	sort(s,s+n+1);
	i = n; j = n/2;
	lli ans=0;
	while(i>n/2 && j>=1)
	{
		if(s[i]>=s[j]*2)
		{
			i--;
			ans++;
		}
		j--;
	}
	ans = n-ans;
	cout<<ans<<endl;
	return 0;
}



