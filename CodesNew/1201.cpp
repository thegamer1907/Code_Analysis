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
	
	lli n,i,j,k;
	cin>>n;
	
	lli num[n+1];
	for(i=1;i<=n;i++)
		cin>>num[i];
		
	lli ans = INF,mini = INF;
	for(i=1;i<=n;i++)
	{
		k = (num[i]-i+1)/n;
		if((num[i]-i+1)%n != 0)
			k += 1;
		k = i+k*n;
		
		if(num[i]<i)
			k = i;
		if(k<mini)
		{
			mini = k;
			ans = i;
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}