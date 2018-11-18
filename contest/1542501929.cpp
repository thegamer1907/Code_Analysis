#include<bits/stdc++.h>
using namespace std;
int n,a,b;string s,t;
int main()
{
	cin>>s;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	  {
	  cin>>t;
	  if(s==t)return printf("YES\n"),0;
	  if(t[1]==s[0])a++;if(t[0]==s[1])b++;
	  }
	return printf("%s\n",a&&b?"YES":"NO"),0;
}
