#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
using namespace std;

int main()
{
	
	string s;
	cin >> s;
	int n;
	cin >> n;
	string ar[109];
	for(int i=0; i<n; i++)
		cin >> ar[i];
	int ans=0,f=0,ff=0;
	for(int i=0; i<n; i++)
	{
		if(ar[i] == s)
			ans = 1;
		if(ar[i][0] == s[1])
			f=1;
		if(ar[i][1] == s[0])
			ff=1;
	}		
	if(ans)
		cout<<"YES\n";
	else if(f && ff)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}