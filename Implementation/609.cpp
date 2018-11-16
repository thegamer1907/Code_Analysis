#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int nilai;
	int banyakyanglulus=0;
	int arr[51];
	for(int i=1;i<=n;i++)
	{
		cin>>nilai;
		arr[i]=nilai;
	}
	for(int i=1;i<=n;i++)
	{
		if(arr[i]>=arr[k]&&arr[i]>0)
		{
			banyakyanglulus=banyakyanglulus+1;
		}
	}

	cout<<banyakyanglulus<<"\n";
	return 0;
}