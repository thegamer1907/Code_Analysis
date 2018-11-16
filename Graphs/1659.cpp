#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	int arr[n];
	
	for(int i = 1; i< n; i ++){
		cin >> arr[i];
	}
	
	int index = 1;
	int cell = 1;
	for(int i = 1; i < n; i ++){
		if(index == t){
			//cout << i << " " << arr[i] << endl;
			break;
		}
		else if(index > t|| index > n){
			//cout << i << " " << arr[i] << endl;
			cout << "NO" << endl;
			return 0;
		}
		index = (index)+arr[index];

	}
	
	cout << "YES" << endl;
	return 0;
}