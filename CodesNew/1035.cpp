#include<iostream>
#include<string.h>
#include<algorithm>
#include<set>
using namespace std;
 
main()
{
	int n,m;
	cin>>n>>m;
	string po[n];
	string en[m];
	for(int i=0;i<n;i++)
	{
		cin>>po[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>en[i];
	}
	sort(po,po+n);
	sort(en,en+m);
	int count=0;
	set<string> hj;
	for(int i=0;i<n;i++)
	{
		hj.insert(po[i]);
	}
	int ors=hj.size();
	for(int i=0;i<m;i++)
	{
		hj.insert(en[i]);
		if(hj.size()==ors)
		count++;
		else
		ors++;
	}
	int flag=1;
	if(count%2!=0)
	{
		n=n-count/2;
		m=m-count/2-1;
	}
	   if(n==m)
	   cout<<"NO";
	   else
	   if(n>m)
	   cout<<"YES";
	   else
	   cout<<"NO";	
     
	
}