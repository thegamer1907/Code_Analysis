#include <bits/stdc++.h>

typedef unsigned long long int ull;
typedef long double ldb;
typedef long long int ll;

#define ForA1(n)  for (ll i=0; i<n; i++)
#define ForA2(n)  for (ll j=0; j<n; j++)
#define ForA3(n)  for (ll k=0; k<n; k++)
#define ForN1(n)  for (ll i=1; i<=n; i++)
#define ForN2(n)  for (ll j=1; j<=n; j++)
#define ForN3(n)  for (ll k=1; k<=n; k++)

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define vi vector<double>
#define pair pair<int,int>
#define F first
#define S second
#define mem(x) memset(x,0,sizeof(x))
#define PI 3.1415926535897932384626433832795l
#define deci(n) cout<<fixed<<setprecision(n)

using namespace std;

vi v;

int main()
{
	ll n , l;
	cin >> n >> l;
	
	ForA1(n){
	    ll x;
	    cin >> x;
	    v.pb(x);
	}
	
	sort(v.begin(),v.end());
	
	if(v[0]!=0  && v[n-1]!=l && v[0] > l-v[n-1]){
	double min = v[0];
	ForA1(n-1){
	    if(min < (v[i+1]-v[i])/2){
	        min = (v[i+1]-v[i])/2 ;
	    }
	}
	deci(10)<<min;
	return 0;	    
	}
	
	else if(v[0]!=0  && v[n-1]!=l && v[0] < l-v[n-1]){
	double min = l-v[n-1];
	ForA1(n-1){
	    if(min < (v[i+1]-v[i])/2){
	        min = (v[i+1]-v[i])/2 ;
	    }
	}
	deci(10)<<min;
	return 0;	    
	}
	
	else if(v[n-1]!=l){
	double min = l-v[n-1];
	ForA1(n-1){
	    if(min < (v[i+1]-v[i])/2){
	        min = (v[i+1]-v[i])/2 ;
	    }
	}
	deci(10)<<min;
	return 0;
	}
	
	
	else if (v[0]!=0){
	double min = v[0];
	ForA1(n-1){
	    if(min < (v[i+1]-v[i])/2){
	        min = (v[i+1]-v[i])/2 ;
	    }
	}
	deci(10)<<min;
	return 0;	    
	    
	}
	
	else if (v[0]==0 && v[n-1]==l){
	double min = v[1]-v[0];
	ForA1(n-1){
	    if(min < (v[i+1]-v[i])){
	        min = (v[i+1]-v[i]) ;
	    }
	}
	deci(10)<<min/2;
	return 0;
	}
	

	
	
	

}