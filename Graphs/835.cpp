
#include<bits/stdc++.h>

//#include "/Users/dhruva/bits/stdc++.h"

#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define rep(i,a,b)	for(ll i=a;i<b;i++)
#define rrep(i,a,b)	for(ll i=a;i>=b;i--)
#define strrev(s)	reverse(s.begin(), s.end())
using namespace std;

#define N  100005

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
	//cin>>TESTS;
	while(TESTS--)
	{
		
		string s;
		ll t,n;
		cin>>n>>t>>s;
		while(t--){
			for(ll i=1;i<=n-1;++i){
				if(s[i-1]=='B' && s[i]=='G'){
					swap(s[i],s[i-1]);
					++i;
				}
			}
		}
		cout<<s<<endl;
		

	}
	return 0;
}











