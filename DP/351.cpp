#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int b[n],i=0;
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	int m;
	cin>>m;
	int g[m];
	for(i=0;i<m;i++)
	{
		cin>>g[i];
	}
	int count=0,j;
	sort(b, b+n);              
    sort(g, g+m);
    for(int i=0, j=0; i<n && j<m;)
	{
        if(abs(b[i]-g[j])<=1)
		{     
            count++;
            i++;
            j++;
        }
        else if(b[i] > g[j])
		{    
            j++;
        }
        else
		i++;                   
    }
	cout<<count;
}