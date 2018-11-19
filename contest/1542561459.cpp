#include <bits/stdc++.h>
using namespace std ;
int main ()
{
	char a,b,debut,fin;int n;bool f=false,s=false;
	cin>>a>>b;
	cin>>n;char c[n],d[n];
		for(int i=0;i<n;i++)
		{
			cin>>c[i]>>d[i];
			if(c[i]==b)f=true;if(d[i]==a)s=true;
			if(f&&s || (c[i]==a && d[i]==b)) {cout<<"YES";return 0;
			}
		}
	
	if(n==1)
	{
		if(c[0]==b &&d[0]==a){cout<<"YES";return 0;
			}
	}
cout<<"NO";
 return 0;
}