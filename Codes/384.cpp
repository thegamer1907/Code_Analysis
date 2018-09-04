// In The Name Of God

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(0)
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back
#define ll long long

using namespace std;
const int N = 1e5+22 ;

int n;

int main()
{IOS;
	int x=0,y,z,ans;

	cin>>n;
	while(n)
	{
		x++;y=x;z=0,ans=x;
		while(y)
		{
			z+=y%10 ;
			y/=10;
		}
		if(z==10) n-- ;
	}
	cout<<ans;
	
	
	return 0;
}
