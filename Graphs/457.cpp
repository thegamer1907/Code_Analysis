#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n,i;
    cin>>n>>i;
    char a[n];
    int j;
    for(j=0;j<n;j++)
    	cin>>a[j];
    	
    for(int k=0;k<i;k++)
	{
	    for(j=0;j<n;j++)
		{
			if(a[j]=='B' && a[j+1]=='G')
			{
				a[j]='G';
				a[j+1]='B';
				j++;
			}	
		}
	}

	for(j=0;j<n;j++)
		cout<<a[j];	
}