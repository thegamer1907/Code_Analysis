#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
 	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 	string s;
 	cin>>s;
 	int n;
 	cin>>n;
 	char a[n+1]={'*'},b[n+1]={'*'},c;
 	
 	string ans="NO\n";
 	bool b1=0,b2=0;
 	for(int i=1;i<=n;i++)
 	{ 		
 		cin>>a[i]>>b[i]; 
 		if(a[i]==s[0]&&b[i]==s[1])ans="YES\n";
 		if(a[i-1]==s[1])b2=1;if(b[i]==s[0])b1=1; if(b1&&b2)ans="YES\n";
	}
	
	for(int i=1;i<=n;i++)
 	{
 		if(b[i]==s[0]&&a[i]==s[1])ans="YES\n";
 		if(a[i]==s[1])b2=1; if(b[i]==s[0])b1=1; if(b1&&b2)ans="YES\n";
	}
	cout<<ans;
	
	
}
