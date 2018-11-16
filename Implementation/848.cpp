#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define f first
#define s second
typedef long long ll;
typedef pair<ll,ll> pl;
typedef vector<ll> vll;
typedef vector<pl> vpl;


using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--)
	{
		for(ll i=0;i<n;)
		{
			if(s[i]=='B' && s[i+1]=='G')
			{
				swap(s[i],s[i+1]);
				i+=2;
			}
			else
				i++;
		}
	}
	cout<<s<<endl;

	
		
	
	
}




