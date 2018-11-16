#include <iostream>
using namespace std;

int main() {
	int n,k, sum = 0;
	cin >> n >> k;
	int a[100];

	for (int i = 0; i < n; i++) 
		cin >> a[i];
	

	for (int j = 0; j < n; j++) {

		if (a[j]>=a[k-1]&&a[j]>0) 
			sum++;
		
	}


	cout  << sum << endl;


	return 0;
}