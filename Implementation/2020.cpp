#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
	
	ll n;
	
	cin>>n;
	ll a,b,c;
	ll x=0,y=0,z=0;
	
	
	while(n--)
	{
		cin>>a>>b>>c;
		
		x+=a;
		y+=b;
		z+=c;
	}
	
	if(x==0 && y==0 && z==0)cout<<"YES";
	else cout<<"NO";
	cout<<endl;
	return 0;
}