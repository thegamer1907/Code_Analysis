#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define inf 1e18
#define PB push_back
#define POPB  pop_back
#define pf printf
#define sf scanf
#define ALL(c) c.begin(),c.end()
#define TR(v,it) for(auto it=v.begin();it!=v.end();it++)
#define FT(i,n) for(int i=0;i<n;i++)
#define FRT(i,n) for(int i=n;i>=0;i--)
#define FTG(i,a,b) for(int i=a;i<=b;i++)
#define FTGR(i,a,b) for(int i=a;i>=b;i--)
#define MP make_pair
#define F first
#define S second
#define endl "\n"
#define mod 1e9+7
#define scni(n) scanf("%d",&n);
#define scnll(n) scanf("%lld",&n);
#define scnf(n) scanf("%f",&n);
#define scnlf(n) scanf("%lf",&n);
// void checkstat()
// {
//     freopen("inp.txt","r",stdin);
//     freopen("op.txt","w",stdout);
// }

void boost()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int getfirstone(ll k)
{
	int cnt=0;
	while(k)
	{
		cnt++;
		if(k&1)
		break;
		k/=2LL;
	}
	return cnt;
}

int main()
{
	boost();
	int n;
	cin>>n;
	ll k;
	cin>>k;
	int pwr=getfirstone(k);
	cout<<pwr<<endl;
	return 0;
}