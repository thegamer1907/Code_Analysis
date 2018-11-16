#include<bits/stdc++.h>
#define mod 1000000007
#define lng long long
#define inf 0x7fffffff
using namespace std;

const double PI = 3.141592;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(0);

	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >>arr[i];
	}
	int ans = k;
	if(arr[k-1] == 0) {
	for(int i=k-1; i>=0 && arr[i]==0; i--)
		ans -= 1;
	}
	else{
		for(int i=k; i<n && arr[i]==arr[k-1]; i++)
			ans += 1;
	}
cout << ans<<"\n";

	return 0;
}