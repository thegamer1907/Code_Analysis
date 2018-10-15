#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cout << fixed << showpoint << setprecision(10);
	int n;
	cin >> n;
	string arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = n - 2; i >= 0; i--){
		int a = arr[i].size();
		int b = arr[i + 1].size();
		bool ok = 0;
		int idx = -1;
		for(int j = 1; j < min(a, b); j++){
			if(arr[i][j] < arr[i + 1][j]){
				ok = 1;
				break;
			}if(arr[i][j] > arr[i + 1][j]){
				idx = j;
				break;
			}
		}
		if(!ok){
			if(idx == -1){
				while(arr[i].size() > arr[i + 1].size()){
					arr[i].pop_back();
				}
			}else{
				while(arr[i].size() > idx){
					arr[i].pop_back();
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(char x : arr[i]){
			cout << x;
		}
		cout << endl;
	}
}
