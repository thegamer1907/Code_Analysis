#include <bits/stdc++.h>
#include <sstream>

using namespace std;

typedef long long int ll;

string strings[500005];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	ll m = n, k = 0;
	while(n--)
	{
		cin >> strings[k];
		k++;
	}
	for(ll i = m-2; i >= 0; i--)
	{
		if(strings[i] > strings[i+1])
		{
			for(ll j = 0; j < strings[i].size(); j++)
			{
				if(strings[i][j] > strings[i+1][j])
				{
					strings[i].resize(j);
					break;
				}
			}
		}
	}
	k = 0;
	while(m--)
	{
		cout << strings[k] << endl;
		k++;
	}
	return 0;
}