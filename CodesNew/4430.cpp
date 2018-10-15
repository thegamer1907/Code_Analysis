#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MOD 1000000007
#define pp pop_back
#define MAXN   100001
#define mp make_pair
#define endl '\n'
#define ff first
#define ss second
#define mapcl map<char,ll>
#define mapll map<ll,ll>
#define cmp complex<double>
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286 
#define inf LLONG_MAX
void fast(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
	string s[n];
	ll i,j;
	for(i=0;i<n;i++)
	cin>>s[i];
	for(i=n-2;i>=0;i--)
	{
		for(j=1;j<(ll)s[i].size();j++)
		{
			//cout<<j<<endl;
			if(s[i][j-1]=='A')
			{
				s[j]='A';
				break;
			}
			if(j<(ll)s[i+1].size())
			{
				if(s[i][j]>s[i+1][j])
				{	
					s[i][j]='A';
					break;
				}
				else if(s[i][j]<s[i+1][j])
				break;
			}
			else
			{
				s[i][j]='A';
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<(ll)s[i].size();j++)
		{
			if(s[i][j]=='A')
			break;
			cout<<s[i][j];
		}
		cout<<endl;
	}
}
