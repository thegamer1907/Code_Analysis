#include<bits/stdc++.h>
using namespace std;
int main()
{    int i,t=0;
	string s;
	cin>>s;
	int n;
	cin>>n;
	int z[s.length()];
	z[0]=0;
	for(i=1;i<s.length();i++)
	{
		if(s[i]==s[i-1])
	{
			t++;}
		z[i]=t;
		
		
	}

	int a[n][2];
	for(i=0;i<n;i++)
	{
	cin>>a[i][0]>>a[i][1];
	cout<<z[a[i][1]-1]-z[a[i][0]-1]<<"\n";
		}
		return 0;
}
