#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> arr;
	int minindex=-1;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
		if(arr[i] > 0)
		{
			minindex=i;
		}
	}
		minindex=n-minindex-1;
		x=arr[k-1];
		reverse(arr.begin(),arr.end());

		int index2=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
		minindex=max(index2,minindex);
		int ans=n-minindex;
		cout<<ans<<endl;
	
	return 0;
}