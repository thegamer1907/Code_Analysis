/*input
4
0 1 -1 0
*/

#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
#define ld long double
#define mp make_pair
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i,b,a) for(int i=b;i>=a;i--)
using namespace std;
#define ret 100000000000000000
#define max 1000000000
#define mod 1000000007

int mx[101],ans[101];
int m,s;

int main()
{
	ll n;
	cin>>n;

	ll sum=0;
	ll arr[n];
	rep(i,0,n)
	{
		cin>>arr[i];
		//arr[i]+=max;
		sum+=arr[i];

	}
	
	if(sum%3!=0)
		cout<<0<<endl;
	else
	{
		ll req=sum/3;
		ll end[n];
		ll s=0;
		per(j,n-1,0)
		{
			end[j]=0;
			s+=arr[j];
			if(s==req)
				end[j]=1;
		}
		per(j,n-2,0)
		{
			end[j]+=end[j+1];
			//cout<<end[j]<<" ";
		}
		s=0;
		ll ways=0;
		rep(j,0,n)
		{
			s+=arr[j];
			if(s==req)
			{
				if(j<n-2)
					ways+=end[j+2];
			}
		}
	
	cout<<ways<<endl;
	}
	return 0;

}

