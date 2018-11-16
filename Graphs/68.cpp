#include <bits/stdc++.h>
using namespace std ;
typedef long long ll;
main(){
int t,n;
cin>>n>>t;
string s;
cin>>s;
for (int k= 0; k < t; ++k)
	{
		for (int i = 0; i < s.size(); ++i)
		{	if(s[i]=='B' && s[i+1]=='G')
				{swap(s[i],s[i+1]);i++;}
			
		}
	}	
cout<<s;




}