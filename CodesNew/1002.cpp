#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,i,j ;
	double c=0;
    cin>>n>>m;
    string s[n],a[m],b[m];
    for(i=0;i<n;i++)
    {
    	cin>>s[i];
    	 	
	}
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(s[i]==a[j])c++;
		}
	}
	if(n-floor(c/2)>m-ceil(c/2) )cout<<"YES";
	else cout<<"NO"  ;
	return 0;
}
