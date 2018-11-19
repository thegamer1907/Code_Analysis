#include<bits/stdc++.h>
using namespace std;
int a[3];
int main()
{
	int i,j,k,n,m,t=-1,tt=-1;
	cin>>a[0]>>a[1]>>a[2]>>n>>m;
	a[1]=a[1]/5;
	a[2]=a[2]/5;
	sort(a,a+3);
	
	if(n>a[0] && n<=a[1])
	  t=1;
	else if(n>a[1] && n<=a[2])
	  t=2;
	else
	  t=3;
	 
	if(m>a[0] && m<=a[1])
	  tt=1;
	else if(m>a[1] && m<=a[2])
	  tt=2;
	else
	  tt=3;
	  
	if(t==tt)
	  cout<<"YES";
	 else
	  cout<<"NO";
	return 0;   
}