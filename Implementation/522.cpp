#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,counter=0,arr[51];
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=arr[k-1]&&arr[i]>0)
		{
			counter++;
		}
	}
	cout<<counter;
}
