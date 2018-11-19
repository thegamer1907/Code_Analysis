#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pair<ll,ll> 
#define mk make_pair
#define inf 1e9
#define eps 1e-9
#define mod 1000000007 
using namespace std;
const int N=200005,M=11;
int siev[1000005];
int phi[1000005];
 
vector<pp> prime[1000005];


void sieve(){for(int i=2;i<=1e6;i++)
	{
		if(siev[i]==0)
			{
				for(int j=i;j<=1e6;j+=i)
				{
					siev[j]=i;
					int cnt=0,m=j;
					while(m%i==0)
					{
						m=m/i;
						cnt++;
					}

					prime[j].pb(mk(i,cnt));
				}
			}
		}
	}

 

string str[105];

int main()
{
	//sieve();
	
	string s;
	cin>>s;

	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str[i];

		if((str[i][0]==s[0]&&str[i][1]==s[1])||str[i][0]==s[1]&&str[i][1]==s[0])
		{
			cout<<"YES\n";
			return 0;
		}
	}

for(int i=0;i<n;i++)
{
	if(str[i][0]==s[1])
	{
		for(int j=0;j<n;j++)
		{
			if(str[j][1]==s[0])
			{
				cout<<"YES\n";
				return 0;
			}
		}
	}
}
	
	cout<<"NO\n";

	return 0;

}