#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	string child;
	cin>>n>>t>>child;
	for(int i=0;i<t;i++)
	{
	    for(int j=0;j<n-1;j++)
	    {
	        if(child[j]=='B' && child[j+1]=='G')
	        {
	            child[j]='G';
	            child[j+1]='B';
	            j++;
	        }
	    }
	}
	cout<<child<<endl;
}