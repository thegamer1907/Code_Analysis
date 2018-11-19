#include <bits/stdc++.h>
#include <cstdlib>
#include <stdint.h>
typedef long long ll;
typedef unsigned long long ull;
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
using namespace std;
string a[102];
int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
//	freopen("A-small-practice.in", "r", stdin);
//	freopen("ou	tput.txt", "w", stdout);
	string s;
	cin>>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x=0,y=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			cout<<"YES\n";
			return 0;
		}
		if(a[i][0]==s[1])
		{
			x++;
		}
		if(a[i][1]==s[0])
		{
			y++;
		}
	}
	if(x>0&&y>0)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}


