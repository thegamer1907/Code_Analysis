#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, total = 0; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i]==1) total++; 
	}
	int maxx = 0;
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			int one =0, two =0;
			for(int k=i; k<=j; k++){
				if(arr[k]==1) one++;
				else two++;
			}
			int p = total+two-one;
			maxx = max(maxx, p);
		}
	}
	cout<<maxx;
	return 0;
}
