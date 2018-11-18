#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,n,c=0,flag=0,j;
	string s1,s2[105];
	cin>>s1;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>s2[i];
	    if(s2[i]==s1||(s1[0]==s2[i][1]&&s1[1]==s2[i][0]))
	    flag=1;
	}
	if(flag==1)
	{
	    cout<<"YES";
	    return 0;
	}
	else {
	    for(i=0;i<n;i++)
	    {
	        if(s2[i][1]==s1[0])
	        {for(j=0;j<n;j++)
	            {
	                if(s2[j][0]==s1[1])
	                {cout<<"YES";
	                return 0;
	                }
	             }
	        }
	    }}

	cout<<"NO";
	return 0;
}
