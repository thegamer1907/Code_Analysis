/*input
BSC
1 1 1
1 1 3
1000000000000

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
#define N  100005
lld nb,ns,nc,pb,ps,pcc,money;
string s;
lld cb,cs,cc;
lld check(lld k)
{
	lld rb=0,rc=0,rs=0;
	rb=k*cb;
	rc=k*cc;
	rs=k*cs;
	lld price;
	price=((max((lld)0,rb-nb)*pb)+(max((lld)0,rs-ns)*ps)+(max((lld)0,rc-nc)*pcc));
	if (price<=money)
		return 1;
	else
		return 0;
}
void bs()
{
	lld ans=0;
	lld low=0,high=1e13;
	while(low<=high)
	{
		lld mid=(low+high)/2;
		if(check(mid))
		{
			ans=mid;
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	cout<<(low-1);
}
void solve()
{
	lld n;
	cin>>s;
	cin>>nb>>ns>>nc;
	cin>>pb>>ps>>pcc;
	n=s.size();
	cin>>money;
	for(lld i=0;i<n;i++)
	{
		if(s[i]=='B')
			cb+=1;
		else if(s[i]=='S')
			cs+=1;
		else
			cc+=1;
	}
	bs();
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}