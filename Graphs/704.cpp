#include<bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
typedef unsigned long long ull;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
typedef std::vector<vi > vvi;
typedef std::vector<vll > vvll;
typedef std::pair<int,int> ii;
typedef std::pair< ll, ll > lp;
typedef std::vector<ii> vii;
typedef std::vector<vii > vvii;
 
#define pb push_back 
#define PB pop_back
#define pf push_front
#define PF pop_front
#define mp make_pair
#define mem(a,b) memset(a,b,sizeof(a))
#define in(a,n) F(i,0,n-1)cin>>a[i]
#define in1(a,n) F(i,1,n)cin>>a[i]
#define ff first
#define ss second
#define F(i,a,b) for (ll i=a;i<=b;i++)
#define RF(i,a,b) for(ll i=a;i>=b;i--)
#define rep(i,n) F(i,0,n-1)
#define clr clear
#define rz resize
#define sqr(a) ((a) * (a))
#define sz(a) int((a).size())
#define all(a) (a).begin(), (a).end()
#define len(s) (s).length()

int main()
{
	crap;
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	int nog=0,nob=0;
	rep(i,n)
		if (s[i]=='G')
			nog++;
	nob=n-nog;
	string ideal;
	rep(i,nog)
		ideal+='G';
	rep(i,nob)
		ideal+='B';
	int time=0;
	while (time<t && s!=ideal)
	{
		rep(i,n-1)
		{
			if (s[i]=='B' && s[i+1]=='G')
			{
				s[i]='G';
				s[i+1]='B';
				i++;
			}
		}

		time++;
	}

	if (time==t)
		cout<<s<<"\n";
	else
		cout<<ideal<<"\n";
}