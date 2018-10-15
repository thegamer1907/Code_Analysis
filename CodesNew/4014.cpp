//Author:- IITian_Sujal
//let's keep it simple and easy....
#include<bits/stdc++.h>
#define ll          long long int
#define mp          make_pair
#define pii         pair<int,int>
#define pb          push_back
#define vi          vector<int>
#define Max(a,b)    ((a)>(b)?(a):(b))
#define Min(a,b)    ((a)<(b)?(a):(b))
#define rep(i,a,b)  for (__typeof((b)) i=(a);i<(b);i+=1)
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define mod	        1000000007
#define endl        '\n'
#define io			ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
vector<ll>a,b;
int main()
{
	io
	#ifdef LOCAL_PROJECT
	//freopen ("1.txt","r",stdin);
	#endif
	int n,q;
	cin >>n>>q;
	a.resize(n+1);
	b.resize(q);	
	rep(i,0,n)
	{
		cin >>a[i];
	}
	rep(i,1,n)
	{
		a[i]+=a[i-1];
	}
	a[n]=1e18;
	ll s=0;
	rep(i,0,q)
	{
		ll r;
		cin >>r;
		s+=r;
		//cout<<s<<" p";
		int x=upper_bound(a.begin(),a.end(),s)-a.begin()-1;
		//cout<<x<<endl;
		if(x==n-1)
		{
			cout<<n<<endl;
			s=0;
		}
		else
		{
			cout<<n-x-1<<endl;
		}
	}

} 