#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	for(int i=0; i < n; ++i){
		cin >> a[i];
		sum += a[i];
	}
	if(sum == n){
		cout << n-1 << endl;
		return 0;
	}
	int max = 0;
	for(int i=0; i < n; ++i){
		for(int j=i; j < n; ++j){
			int sub = 0;
			for(int k=i; k <= j; ++k){
				if(a[k] == 0){
					sub += 1;
				}
				else{
					sub += -1;
				}
			}
			max = max > sub? max : sub;
		}
	}
	cout << sum+max << endl;
	return 0;
}
