#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
#define fi cin
#define fo cout 
#define repi(i,a,n) for(i=a;i<n;i++)
#define repie(i,a,n) for(i=a;i<=n;i++)
#define repd(i,a,n) for(i=n;i>a;i--)
#define repde(i,a,n) for(i=n;i>=a;i--) 
#define pb(n) push_back(n)
#define mp(a,b) make_pair(a,b)
#define ff first
#define ss second
#define dfo if(0) cout
#define mod 1000000007
#define d(x) (x-'0')
#define mem(x) memset(x,0,sizeof(x))
#define MAXN ll(3e5+5)
int main()
{
	ios_base::sync_with_stdio(0);
	fi.tie(0);
	fo.tie(0);


	ll i,j,k,t,tc,n,m,a_cnt=0,b_cnt=0,c_cnt=0;

	fi>>a_cnt>>b_cnt;

	set<string>set_a;
	string s;

	repi(i,0,a_cnt)
	{
		fi>>s;
		set_a.insert(s);
	}
	m = b_cnt;
	repi(i,0,m)
	{
		fi>>s;

		if(set_a.find(s) != set_a.end())
		{
			set_a.erase(s);
			--a_cnt;
			++c_cnt;
			--b_cnt;
		}
		

				
	}
	ll st=0;
	if(c_cnt%2)
		st = 1;

	//cout<<"a_cnt:"<<a_cnt<<" b_cnt:"<<b_cnt<<" c_cnt:"<<c_cnt<<endl;
	//cout<<"st:"<<st<<endl;
	if(st == 0)
		if(a_cnt > b_cnt)
			fo<<"YES"<<endl;
		else
			fo<<"NO"<<endl;
	else
	{
		if(b_cnt > a_cnt)
			fo<<"NO"<<endl;
		else
			fo<<"YES"<<endl;
	}
}