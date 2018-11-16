/*input
6
OO|OX
XO|XX
OX|OO
XX|OX
OO|OO
OO|XX
*/
#include<bits/stdc++.h>

using namespace std;

typedef     long long      ll;
typedef     long double    ld;
typedef     pair<int,int>  pii;
typedef     pair<ll,ll>    pll;

#define     rep(i,a,b)     for(int i=a;i<b;i++)
#define     repr(i,a,b)    for(int i=a;i>=b;i--)
#define     pb             push_back
#define     mp             make_pair
#define     fs             first
#define     ss             second
#define     mems(m,b)      memset(m,b,sizeof(m))
#define     all(v)         v.begin(),v.end()
#define     mod            1000000007
#define     maxn           1500+50
#define     fast           ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;

	int n,flag=0;
	cin>>n;
	string s[n];
	rep(i,0,n) cin>>s[i];
	
	rep(i,0,n)
	{
		if((s[i][0]==s[i][1]) && s[i][0]=='O')
		{
			flag=1;
			s[i][0]=s[i][1]='+';
			break;
		}
		else if(s[i][3]==s[i][4] && s[i][3]=='O')
		{
			flag=1;
			s[i][3]=s[i][4]='+';
			break;
		}
	}
	if(!flag) cout<<"NO";
	else
	{
		cout<<"YES\n";
		rep(i,0,n) cout<<s[i]<<'\n';
	}
}