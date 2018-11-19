#include<bits/stdc++.h>
#define mod 1000000007
#define nax 1000005
#define inf 100000000000000000LL
#define pb push_back
#define mp make_pair
#define in insert
#define ff first
#define ss second
#define pll pair<long long int,long long int>
#define pii pair<int,int>
#define vll vector<long long int>
#define vii vector<int>
#define sii set<int>
#define vb vector<bool>
#define sll set<long long int>
#define mii map<int,int>
#define mll map<long long int,long long int>
#define mis map<int,string>
#define all(n) n.begin(),n.end()
#define tr(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define lpi(i,a,b) for(int i=a;i<b;i++)
#define lpir(i,a,b) for(int i=a;i>=b;i--)
#define lpl(i,a,b) for(ll i=a;i<b;++i)
#define lplr(i,a,b) for(ll i=a;i>=b;--i)
#define lpv(c,it) for(vii::iterator it=(c).begin();it!=(c).end();it++)
//#define test() int t; scanf("%d",&t); while(t--)
using namespace std;
typedef long double ld ;
typedef long long int ll;
const int N =(int) 1e3+4;
ll h,m,s,t1,t2;
bool c[101];
int main()
{
	cin>>h>>m>>s>>t1>>t2;
	h = (h*5)%60;
	t1 = (t1*5)%60;
	t2 = (t2*5)%60;
	c[h]=c[m]=c[s]=1;
	if(t1>t2)
	{
		swap(t1,t2);
	}
	ll i;
	for(i=t1;i<t2;i++)
	{
		if(c[i])
		{
			break;
		}
	}
	if(i==t2)
	{
		cout<<"YES";
		return 0;
	}
	i=t2;
	while(i!=t1)
	{
		if(c[i])
		{
			break;
		}
		i = i+1;
		i = i%60;
	}
	if(i==t1)
	{
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}