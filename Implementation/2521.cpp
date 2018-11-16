#include<bits/stdc++.h>

using namespace std;
int n;
string a;
int main()
{
	cin>>a;n=a.size();
	for(int i=0;i<n;i++)
		if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
			return cout<<"YES",0;
	cout<<"NO";
	
	
}