#include <bits/stdc++.h>

using namespace std;

int main() {
	long long  x,t;
	cin>>x>>t;
	long long  a[x];
	// for(int i=0;i<x;i++){
	// 	cin>>a[i];
	// }
	long long ans = 0;
	long long f = 0;
	// sort(a,a+x);
	int r = 0;
	for(int i=0;i<x;i++){
		cin>>a[i];
		// t  = t - a[i];
		f = f + a[i];
		// cerr<<t<<endl;
		if(f > t){
			f= f  - a[r];
			r++;
		}else{
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0 ;
}