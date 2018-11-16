#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
		int n,m,arr2[102],arr1[102];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	cin>>m;
	
	for(int i=0;i<m;i++)
	{
		cin>>arr2[i];
	}
	sort(arr1,arr1+n);
	sort(arr2,arr2+m);
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr1[i]==arr2[j]||arr1[i]-arr2[j]==1||arr2[j]-arr1[i]==1)
			{
				cnt++;
				arr2[j]=1000;
				break;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}