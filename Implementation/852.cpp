#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int n;
	int t;
	cin>>n>>t;
	int i;
	string a;
	string copy="";
 	cin>>a;
 	copy+=a;
 	while(t--)
 	{
 	for(i=0;i<n-1;i++)
 	{
 		if(a[i]=='B'&&a[i+1]=='G')
 		{
 			copy[i]='G';
 			copy[i+1]='B';
 		}
 	}
 	a="";
 	a+=copy;
 	}
 	cout<<a;
}