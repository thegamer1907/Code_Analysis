#include "bits/stdc++.h"
using namespace std;
const int N=1e2+20;
int n,i,j;
string a,s[N];
bool ok;

int main()
{
	cin>>a>>n;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
		if(s[i]==a) ok=true;
		
		reverse(s[i].begin(),s[i].end());
		if(s[i]==a) ok=true;
		reverse(s[i].begin(),s[i].end());
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[i][1]==a[0] and s[j][0]==a[1]) ok=true;
		}
	}
	
	if(ok) cout<<"YES";
	else cout<<"NO";
}