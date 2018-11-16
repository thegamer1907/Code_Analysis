#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)	cin>>arr[i];
	int sum=0,temp=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
			sum++;
	}
	int mini=sum;
	if(arr[0]==1)
		mini--;
	if(arr[0]==0)
		mini++;
	
	for(int i=0;i<n;i++)
	{
		int temp=0,temp1=0;
		
		
		for(int j=i;j<n;j++)
		{
			if(arr[j]==0)
				temp++;
			
			if(arr[j]==1)
				temp1++;
			
			if(mini<(sum-temp1+temp))
				mini=sum-temp1+temp;				
		}
	}	
	cout<<mini<<endl;	
}
