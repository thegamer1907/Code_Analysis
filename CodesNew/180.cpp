#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,t,res=INT_MIN,i,val=0;
	cin >> n >> t;
	vector <long long int> arr(n),sums(n);
	for(i=0;i<n;i++){
		cin >> arr[i];
		if(i!=0)
			sums[i]=sums[i-1]+arr[i];
		else sums[i]=arr[i];
		}
	for(i=0;i<n;i++){
		if(i==0)
			val=t;
		else val=sums[i-1]+t;
		res=max(res,upper_bound(sums.begin(),sums.end(),val)-sums.begin()-i);
	}
	cout << res << endl;
}