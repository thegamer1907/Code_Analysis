#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main() {
	
	lli n,t;
	
	cin>>n>>t;
	
	lli a[n];
	
	for(lli i=0;i<n;i++)
	cin>>a[i];
	
	//sort(a,a+n);
	
	
	
	lli s=0,l=0,sum=0,ct=0,temp=0;
	
	while(l<n)
	{
	    if(sum+a[l]<=t)
	    {
	        sum+=a[l];
	        l++;
	        ct++;
	    }
	    
	    else
	    {
	        sum-=a[s];
	        s++;
	        ct--;
	    }
	    
	    
	   // cout<<ct<<" ";
	    temp=max(temp,ct);
	}
	
	cout<<temp;
}