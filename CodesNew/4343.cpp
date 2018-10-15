#include<bits/stdc++.h>
using namespace std;
#define ll long 
string s[500005];
int main()
{
int n;
cin>>n;
for (int i = 0; i < n; ++i)
cin>>s[i];

for (int i = n-2; i >=0; --i)
{
if(s[i]<=s[i+1])
continue;
int j;
for(j=0;j<min(s[i].length(),s[i+1].length());j++)
{
	if(s[i][j]>s[i+1][j])
	break;
}
s[i]=s[i].substr(0,j);
}
for (int i = 0; i < n; ++i)
cout<<s[i]<<"\n";



	
	return 0;
}