#include<bits/stdc++.h>
#define loop(n) for (int i;i<n;i++)
using namespace std;

int main() {
	int n,k;
	bool flag = false;
	cin>>n>>k;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	for(int i=0;i<n;i+=arr[i]) {
		if(i == k-1) {
		        flag= true;
		        break;
		}
		if(i > k) break;
	}
	if(flag) cout<<"YES";
	else cout<<"NO";
 }