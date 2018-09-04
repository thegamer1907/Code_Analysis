#include <bits/stdc++.h>
using namespace std;


long long n;

int main(){
	cin >> n;
	long long l = 1, r = n;
	while (l!=r){
		long long mid = (l+r)/2;
		long long k = n,t1=0;
		while (k>0){
			t1+=min(mid,k);
			k-=min(mid,k);
			k-=k/10;
		}
		if (t1>=(n+1)/2) r=mid;else l = mid+1;
	}
	cout << l << endl;
}