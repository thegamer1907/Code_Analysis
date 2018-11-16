#include <bits/stdc++.h>
using namespace std;

int main() {

	int n,count0=0,count1=0,max=-1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		{
			count1++;
			if(count0>0)
			{
				count0--;
			}
		}
		else
		{
			count0++;
			if(max<count0)
			max=count0;
		}
	}
	cout<<count1+max;
	
}