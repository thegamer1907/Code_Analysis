#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int n,i,j,d=0;
	cin>>n;
	string ss[n];
	for(i=0;i<n;i++)
	{cin>>ss[i];if(s==ss[i]) d=1;}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        if((s[0]==ss[i][1]&&s[1]==ss[j][0])||(s[0]==ss[j][1]&&s[1]==ss[i][0]))
	        {
	            d=1;
	            break;
	        }
	        
	    }
	    if(d==1)
	        break;
	}
	if(d==0)
	cout<<"NO";
	else
	cout<<"YES";
	return 0;
}
