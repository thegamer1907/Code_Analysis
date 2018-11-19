#include <iostream>
#include <string>
using namespace std;
int n,i,a,b;
string s,s1;
int main ()
{
	cin>>s>>n;
for (i=1; i<=n; i++)
{
	cin>>s1;
	if (s1==s) a=1,b=1;
	if (s[0]==s1[1])  a=1;
	if (s[1]==s1[0])  b=1;
}

if (a==1 && b==1) cout<<"YES"<<endl;
else
				  cout<<"NO"<<endl;
	return 0;
}