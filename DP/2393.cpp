/*input
1 1
100
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
#define N  200005
void solve()
{
	lld ht[N];
	for(lld i=0;i<N;i++)
	{
		ht[i]=0;
	}
	lld n,k;
	cin>>n>>k;
	for(lld i=1;i<=n;i++)
	{
		cin>>ht[i];
		ht[i]=ht[i]+ht[i-1];
	}
	lld ans=hell;
	lld ind=-1;
	for(lld i=1;i<=n-(k-1);i++)
	{
		lld p=ht[i+k-1]-ht[i-1];
		//cout<<p<<" "<<i<<endl;
		if(ans>p)
		{
			ans=p;
			ind=i;
		}
	}
	cout<<ind<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tests=1;
	while(tests--)
	{
		solve();
	}
}