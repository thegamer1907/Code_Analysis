#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
 
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int tmp=0;
			for(int k=i;k<=j;k++)
			{
				if(arr[k]==0)
				tmp++;
			}
			for(int k=0;k<i;k++)
			if(arr[k]==1)
			tmp++;
			for(int k=j+1;k<n;k++)
			if(arr[k]==1)
			tmp++;
			ans=max(tmp,ans);
		}
	}

cout<<ans<<endl;
	return 0;
}