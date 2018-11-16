#include <bits/stdc++.h>
using namespace std;

long long mo = 1000000007;

int main()
{
	long long i, j, k, te, t, n, co, h, d, c1,c2,c3, c4; 
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n;
	string a,b;
	cin>>a>>b;
	co = 0;
	for(i=0;i<a.length();i++)
	{
		if(a[i]!=b[i])
		{
			if(i<n-1 && a[i+1]!=b[i+1] && a[i]==b[i+1])
			{
				co++;
				i++;
			}
			else
			{
				co++;
			}
		}
	}
	cout<<co;
	return 0;
}