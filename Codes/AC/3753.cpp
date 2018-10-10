#include<iostream>
#include<cstring>
#include<climits>
#include<map>
#include<vector>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<numeric>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<iomanip>
#include<unordered_map>

using namespace std;

#define ll long long
#define fi first
#define se second
#define all(sdk) sdk.begin(),sdk.end()
#define mll map<ll,ll>
#define INF 1000000007
#define sz 100000
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;++i)
#define mit(m) for(map<ll,ll> :: iterator it=m.begin();it!=m.end();++it)
using namespace std;


string s;
ll qb=0,qs=0,qc=0,nb,nc,ns,cb,cc,cs,amt;


bool check(ll n)
{
	if(cb*max(n*qb-nb,(ll)0)+cs*max(n*qs-ns,(ll)0)+cc*max(n*qc-nc,(ll)0)<=amt)
		return 1;
	return 0;
}


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	cin>>s;
	rep(i,0,s.length())
	{
		if(s[i]=='B')
			++qb;
		else if(s[i]=='S')
			++qs;
		else ++qc;
	}
	cin>>nb>>ns>>nc>>cb>>cs>>cc>>amt;
	ll beg=0;
	ll last=1e14;
	while(last-beg>1)
	{
		ll mid=(beg+last)/2;
		if(check(mid))
			beg=mid;
		else last=mid;
	}
	cout<<beg;



	




	
	



	

	

	
}






	
	



	


	



	


	


	




	


	