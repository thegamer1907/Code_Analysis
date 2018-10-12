#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	int minn,maxx;
	maxx = arr[n-1]+m;
	for(int i=0;i<n-1;i++){
		if(m<=0){
			break;
		}
		if(m>=arr[n-1]-arr[i]){
			m = m - (arr[n-1]-arr[i]);
			arr[i] = arr[n-1];
		}
		else{
			arr[i] += m;
			m = 0;
		}
	}
	if(m>0){
		minn = arr[n-1]+(m/n);
		if(m%n){
			minn++;
		}
	}
	else{
		minn = arr[n-1];
	}

	cout << minn << " " << maxx << endl;
	return 0;
}
