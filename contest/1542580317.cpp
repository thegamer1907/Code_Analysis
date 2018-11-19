#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define fel(j,m,n) for(int j=m;j<n;j++)
#define ful(j,n) for(int j=0;j<n;j++)
typedef pair<int,int> pa;
typedef vector<int> vec;
#define lvec(j,v) for(int j=0;j<v.size();j++)
#define pb(v) push_back(v)
int main()
{
	string x;
	cin >> x;
	char x1 = x[0];
	char x2 = x[1];
	int n;
	cin >> n;
	bool flag = false,flag1 = false;
	for (int j=0;j<n;j++)
	{
		string m;
		cin >> m;
		if (m[0]==x1&&m[1]==x2)
		{
			flag = true;
			flag1 = true;
		}
		if (m[1]==x1)
		{
			flag = true;
		}
		if (m[0]==x2)
		{
			flag1 = true;
		}
	}
	if (flag&&flag1)
	{
		cout <<"YES\n";
	}
	else
	{
		cout <<"NO\n";
	}
	return 0;
}