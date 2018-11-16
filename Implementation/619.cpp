#include <iostream>
using namespace std;
int main(){
	int n, k, A[100], m=101, i, j=0;
	cin >> n >> k;
	for (i = 0; i < n; i++){
		cin >> A[i];
		if (A[i] == 0){
			m = i;
			break;
		};
	};
	for (i = k; i < n; i++){
		if (A[k-1]==A[i]){
			j++;
		};
	};
	if (m>(k + j)){
		cout << (k + j);
	}
	else{
		cout << m;
	};
}