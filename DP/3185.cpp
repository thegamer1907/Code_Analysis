#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int arrb[maxn];
int arr[maxn],n;
int main()
{

	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int left=0;
	int maxx=0;
	arr[-1]=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i-1]*2<arr[i])
		{
			left=i;
		}
		maxx=max(maxx,i-left);
	}
	cout<<maxx+1<<endl;


}