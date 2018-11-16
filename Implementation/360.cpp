#include <iostream>

using namespace std;

int arr[51];

int main() {
	int n, k;
	
	cin >> n >> k;

	k--;

 	for (int i = 0; i < n; i++) {		
 		cin >> arr[i];	
 	}
	
	if (arr[k] > 0) {

		while (arr[k] == arr[k+1]) {
			k++;
		}

	}
	else {

		while ( k >= 0 ) {
			if (arr[k] == 0)
				k--;
			else
				break;
		}

	}

	cout << k + 1;
	
	return 0;
}