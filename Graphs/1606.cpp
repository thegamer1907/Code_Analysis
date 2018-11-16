#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
#include<string.h>
#include<algorithm>

using namespace std;

#define ll long long
#define D double
#define ff first
#define ss second


bool ch[100000];
stack<ll> s;
vector<ll> a[100000];
map<pair<ll,ll>,ll> fr;

 bool isPrime(int n)
	{
	    
	    if (n <= 1)  return false;
	    if (n <= 3)  return true;
	    
	    if (n%2 == 0 || n%3 == 0) 
	    	return false;
	 
	    for (int i=5; i*i<=n; i=i+6)
	    {
	        if (n%i == 0 || n%(i+2) == 0)
	           return false;
	    }
	    
	    return true;
	}

void swap(char a,char b)
{
	char t;
	t=a;
	a=b;
	b=t;
}

int main()
{
	ll n,i,m;
	cin>>n>>m;
	
	ll a[n+1];
	
	for(i=1;i<n;i++)
	cin>>a[i];
	
	i=1;
	while(i<=m)
	{
		i=i+a[i];
		
		if(i==m)
		{
			cout<<"Yes";
			return 0;
		}
	}
	
	cout<<"No";
}
