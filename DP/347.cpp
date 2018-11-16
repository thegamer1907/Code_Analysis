#include<iostream>
#include<bits/stdc++.h>
#include<string>
 
using namespace std;
int main()
{
	int b,g;
	cin>>b;
	int bb[b];
	int i=0;
	while(i<b)
	{
		cin>>bb[i];
		i++;
	}
	i=0;
	cin>>g;
	int gg[g];
	while(i<g)
	{
		cin>>gg[i];
		i++;
	}
	
	sort(bb,bb+b);
	sort(gg,gg+g);
	int count=0;
	for(int i=0,j=0;i<b&&j<g;)
	{	
		if(bb[i]-gg[j]<=1&&bb[i]-gg[j]>=0||gg[j]-bb[i]<=1&&gg[j]-bb[i]>=0)
		{
			count++;
			i++;
			j++;
		}
		else if(bb[i]-gg[j]>1)
		j++;
		else if(gg[j]-bb[i]>1)
		i++;
	}	
	cout<<count;

}