#include <bits/stdc++.h>
#include <cstdlib>
#include <stdint.h>
typedef long long ll;
typedef unsigned long long ull;
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
using namespace std;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
//	freopen("A-small-practice.in", "r", stdin);
//	freopen("ou	tput.txt", "w", stdout);
	int n,k;
	cin>>n>>k;
	set<int>s;
	for(int i=0;i<n;i++)
	{
		int x=0;
		int y;
		for(int j=k-1;j>=0;j--)
		{
			cin>>y;
			x|=(y<<j);
		}
		s.insert(x);
	}
	if(*(s.begin())==0)
	{
		cout<<"YES\n";
		return 0;
	}
	set<int>::iterator it=s.begin(),it1=s.begin();
	for(int i=0;i<(int)s.size()-1;i++)
	{
		it1=it;
		it1++;
		for(int j=i+1;j<(int)s.size();j++)
		{
			if(((*(it))&(*(it1)))==0)
			{
				cout<<"YES\n";
				return 0;
			}
			it1++;
		}
		it++;
	}
	cout<<"NO\n";
	return 0;
}


