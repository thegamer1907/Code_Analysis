/*
 *
 ********************************************************************************************
 * AUTHOR : Vijju123                                                                        *
 * Language: C++14                                                                          *
 * Purpose: -                                                                               *
 * IDE used: Codechef IDE.                                                                  *
 ********************************************************************************************
 *
 Comments will be included in practice problems if it helps ^^
 */



#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool subMask(int k,int l,int count[],int x)
{
    //cout<<"k="<<k<<" l="<<l<<" x="<<x<<endl;
    for(int i=0;i<x;i++)
    {
        if(i!=l and ((i&k)==i) and count[i])
            return true;
    }
    return false;
}

int main() {
	// your code goes here
	#ifdef JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k;
	cin>>n>>k;
	int x=pow(2,k)-1;
	int dp[n];
	int i;
	int j,a;
	for(i=0;i<n;i++)
	{
	    int add=0;
	    for(j=0;j<k;j++)
	    {
	        cin>>a;
	        if(a)add+=pow(2,k-j-1);
	    }
	    dp[i]=add;
	}
	int count[x+1];
	int amt=0;
	for(j=0;j<x+1;j++)
	{
	    amt=0;
	    for(i=0;i<n;i++)
	    {
	        if(dp[i]==j)amt++;
	    }
	    count[j]=amt;
	}
	if(count[0])cout<<"YES"<<endl;
	else
	{
	    for(i=1;i<x;i++)
	    {
	        if(count[i] && subMask(i^x,i,count,x))
	        {
	            cout<<"YES"<<endl;
	            return 0;
	        }
	    }
	    cout<<"NO"<<endl;
	}
	return 0;
}