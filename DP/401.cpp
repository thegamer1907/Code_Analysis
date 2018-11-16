#include <bits/stdc++.h>
using namespace std;

string dp[101][902];
string dp1[101][902];
int main() 
{
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m,n;
	int b[101],g[101];
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>b[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
	    cin>>g[i];
	}
	sort(b,b+n);
	sort(g,g+m);
	
	int i=0,j=0,cnt=0;
	while(i<n&&j<m)
	{
	    if(abs(b[i]-g[j])<=1)
	    {
	        cnt++;
	        i++;
	        j++;
	    }
	    else if(b[i]<g[j])
	    {
	        i++;
	    }
	    else 
	    {
	        j++;
	    }
	}
	cout<<cnt;
	return 0;
}
