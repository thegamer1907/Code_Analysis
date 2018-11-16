#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
#define v vector<int> 
#define vv vector<v>
#define arrayinput int n; int m; cin>>n>>m; v arr (n+1,-1); for (int i=0; i<n; i++){int temp; cin>>temp;arr[i]=temp;}

int main() {
	int n,m;
	cin>>n>>m;
	v arr(n+1,-1);
	map<int,int> count;
	v ans(n+1,0);
	int counter=0;
	for (int i=1; i<=n; i++)
	{
		cin>>arr[i];
	}
	for (int i=n; i>=1; i--)
	{
		if (count[arr[i]]==0)
			counter++;
		ans[i]=counter;
		count[arr[i]]++;
	}

	for (int i=1; i<=m; i++)
	{
		int temp;
		cin>>temp;
		cout<<ans[temp]<<endl;
	}

	
	// your code goes here
	return 0;
}