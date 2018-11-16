#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,d=0,cnt=1,cnt0=0,cnt1=0,ind=0;
	cin>>n;
	int a[n+1],b[n+1];
	for (int i=1; i<=n; i++)
	{
	    cin>>a[i];
		if (a[i]==0)
		  {
		  	b[cnt]=i; 
		  	cnt++;
		  }
		else 
		 ind++;
	}
	for (int i=1; i<cnt; i++)
	{
		for (int j=i+1; j<cnt; j++)
		{
			cnt0=0; cnt1=0;
			for (int k=b[i]; k<=b[j]; k++)
			     if (a[k]==0)  cnt0++;
			     else
			     cnt1++;
	    if (cnt0>cnt1) d=max(d,cnt0-cnt1);
		}
	}
	if (n==1 and a[1]==1) cout<<"0";
	else
	if (n==1 and a[1]==0) cout<<"1";
    else
    if (ind==n) cout<<ind-1;
    else
	   cout<<ind+d;
	
	return 0;
}
