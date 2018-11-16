#include<iostream>
using namespace std;
int main()
{	int n,i,j,h=0,z,k;long long int max,count;
	cin>>n;	
	int ar[n];
	for(i=0;i<n;i++)
	{	cin>>ar[i];	
		if(ar[i]==1)
		h++;
	}
	max=-1;
	for(i=0;i<n;i++)
	{	for(j=i;j<n;j++)
		{	count=0;z=0;
			for(k=i;k<=j;k++)
			{	if(ar[k]==0)
				count++;
				else
				z++;
			}
			if(count+(h-z)>max)
			max=count+h-z;
		}
	}
	cout<<max<<endl;
}
