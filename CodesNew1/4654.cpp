#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define shit ios_base::sync_with_stdio(false);cin.tie(0);



int main()
{
	int n,i;
	cin>>n;
	int a[n],fl[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		fl[i]=0;
	}
	sort(a,a+n);
	int j=n/2,c=0;
	
	for(i=0;i<n/2;i++)
	{
		while(j<n)
		{
		    if((a[i]*2)<=a[j] && fl[j]==0)
		    {
			    //cout<<a[i]<<" "<<a[j]<<endl;
			    fl[j]=1;
			    c++;
			    break;
		    }
		    j++;
	    }
		if(j==n)
			break;
		
	}
	cout<<n-c<<endl;
}