#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = int(a); i <=int(b); i++)
typedef long long int ll;

int main() {
	ll n, k;
	cin>>n>>k;
	ll arr[n];
	rep(i, 0, n-1){
		cin>>arr[i];
	}
	// rep(i, 0, n-1) cout<<arr[i]<<"  ";
	// cout<<endl;
	sort(arr, arr+n, greater<ll>());
	// rep(i, 0, n-1) cout<<arr[i]<<"  ";
	// cout<<endl;
	ll i=0, num=0;
	while((arr[i]!=0) && (arr[i]>=arr[k-1]) &&(i<n)){
		// cout<<num<<"  "<<i<<endl;
		num++;
		i++;
	}
	cout<<num<<endl;
	return 0;
}