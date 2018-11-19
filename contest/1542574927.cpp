#include<bits/stdc++.h>
using namespace std;
char a[4],b[101][4];
int  main()
{
	int i,j,k,n,m,t=0,tt=0;
	cin>>a;
	cin>>n;
	for(i=0;i<n;i++)
	 cin>>b[i];
	for(i=0;i<n;i++) 
	 if (b[i][0]==a[0] && b[i][1]==a[1]) 
	 {
		cout<<"YES";
		return 0;
	 } 
	for(i=0;i<n;i++) 
	 for(j=0;j<n;j++) 
	   if(b[i][0]==a[1] && b[j][1]==a[0]) 
	   {
			cout<<"YES";
			return 0;
	   }
	cout<<"NO";
	return 0;
}