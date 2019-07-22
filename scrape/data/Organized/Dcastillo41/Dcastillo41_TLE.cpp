#include <bits/stdc++.h>

using namespace std;

#define MAX
#define ll long long
#define pii pair<int,int>
#define pss pair<string,string>
#define dii pair<ll,ll>
#define mk make_pair
#define endl '\n'
#define pb push_back
ll M = 1000000007;
vector<ll> p;
int main()
{
	ll n;
	int m,k;
	cin >> n >> m >> k;
	ll temp;
	for(int i =0; i < m ;i++)
	{
		cin >> temp;
		p.pb(temp);
	}
	sort(p.begin(),p.end());
	int acom = 0;
	int multi = 1;
	int result = 0;
	while((1LL*multi*k) <= n && acom < m)
	{
		if(1LL*(k*multi) < p[0])
		{
			multi++;
			continue;
		}
		int hi = m-1;
		int lo = 0;
		//cout << "acom, multi " << acom << " " << multi << endl;
		//cout << "preguntando por " << multi*k+ acom << endl;
		while(hi != lo)
		{
			int m = (hi +lo +1 )/2;
			if(p[m] <= (1LL*(multi*k+ acom)))
			{
				lo = m;
			}
			else
			{
				hi = m-1;
			}
		}
		//cout << "hi = " << hi << endl;
		if(hi+1 == acom)
		{
			multi++;
			continue;
		}
		
		acom = hi+1; 
		result++;
	
	}
	cout << result << endl;
	return 0;
	
}