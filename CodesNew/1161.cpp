#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define ppb         pop_back
#define	endl		'\n'
#define mii         map<ll int,ll int>
#define msi         map<string,ll int>
#define mis         map<ll int, string>
#define rep(i,a,b)    for(ll int i=a;i<b;i++)

#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define mpi         map<pair<ll int,ll int>,ll int>
#define vii         vector<pair<ll int, ll int>>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define what_is(x)  cerr << #x << " is " << x << endl;
using namespace std;
#define N  100005

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll TESTS=1;
	//cin>>TESTS;
	while(TESTS--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    rep(i,0,n)
	    cin>>a[i];
	    ll b[n];
	    rep(i,0,n){
	        if((a[i]-i)<0){
	            b[i]=0;
	            continue;
	        }
	        if((a[i]-i)%n)
	        b[i]=(a[i]-i)/n+1;
	        else
	        b[i]=(a[i]-i)/n;
	    }
	    ll an,min=hell;
	    rep(i,0,n){
	        if(b[i]<min){
	            min=b[i];
	            an=i;
	        }
	    }
	    
	    cout<<an+1;
	}
	return 0;
}