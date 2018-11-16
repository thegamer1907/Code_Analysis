#include<bits/stdc++.h>
using namespace std;
main()
{
	int a,b;
	cin>>a;
	int ar[a],i;
	for(i=0;i<a;i++)
	{
	    cin>>ar[i];
	}
	sort(ar,ar+a);
	cin>>b;
	int ka[b];
	for(i=0;i<b;i++)
	{
	    cin>>ka[i];
	}
	sort(ka,ka+b);
	int k,l=0,j;
	for(j=0;j<a;j++)
	{
	    for(k=0;k<b;k++)
	    {
	        if(abs(ar[j]-ka[k])<=1)
	        {
	            l++;
	            ka[k]=-1;
	            break;
	        }
	    }
	}
	cout<<l;
}