 #include<bits/stdc++.h>
using namespace std;
#define pub push_back
#define ll long long int
int main()
{
	ll n;
	cin>>n;
	ll x[n],y[n],z[n];
	ll sumx=0,sumy=0,sumz=0;
	for(ll i=0;i<n;i++)
	{
		cin>>x[i]>>y[i]>>z[i];
		sumx+=x[i];
		sumy+=y[i];
		sumz+=z[i];
	}
	if(sumx==0 && sumy==0 && sumz==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}