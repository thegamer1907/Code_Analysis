/*input
12
3
99
24
46
75
63
57
55
10
62
34
52

*/
/*
  ####   #    #    ##    #####    ####           #    #
 #       #    #   #  #   #    #  #    #          #    #
  ####   ######  #    #  #    #  #    #          #    #
      #  #    #  ######  #    #  #    #          # ## #
 #    #  #    #  #    #  #    #  #    #          ##  ##
  ####   #    #  #    #  #####    ####  #######  #    #

*/
#include<bits/stdc++.h>
#define lld          long long int
#define pb          push_back
#define ppb         pop_back
#define	endl		'\n'
#define mii         map<lld,lld>
#define msi         map<string,lld>
#define mis         map<lld, string>
#define mpi         map<pair<lld ,lld >,lld >
#define pii         pair<lld,lld>
#define vi          vector<lld>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (lld)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define what_is(x)  cerr << #x << " is " << x << endl;
using namespace std;
#define N  10000005
lld n,k;
void solve()
{
	lld n;
	cin>>n;
	vector <lld> v;
	for(lld i=0;i<n;i++)
	{
		lld c;
		cin>>c;
		v.pb(c);
	}
	sort(v.begin(),v.end());
	lld ans=n,j=(n/2)-1;
	for(lld i=n-1;i>=(n/2) && j>=0 ; i--)
		{
			while(j>=0 && v[i]<2*v[j])
				j--;
			if(j<0)
				break;
			j--;
			ans--;
		}
	cout<<ans;
}
int main()
{
	solve();
}