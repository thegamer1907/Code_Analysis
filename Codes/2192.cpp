#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	long long arr[201000],fwd[201000],bwd[201000];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	fwd[0]=arr[0];
	for(int i=1;i<n;i++)
		fwd[i]=fwd[i-1]+arr[i];
	bwd[n-1] = arr[n-1];
	for(int i=n-2;i>=0;i--)
		bwd[i]=bwd[i+1]+arr[i];
	long long ans = 0;
	for(int i=n-1;i>0;i--) {
		  if (std::binary_search (fwd, fwd+i, bwd[i])) {
			ans = bwd[i];
		  }
	}
	cout<<ans;
	return 0;
}