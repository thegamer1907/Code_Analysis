#include <iostream>

using namespace std;

int main() {
	int n ; cin >> n ;
	int max = -1;
	int arr [n];
	int ans (0), a (0);
	for (int i = 0; i < n ; i++){
	    cin >> arr[i];
	    if (arr[i] == 1){ans ++;}
	}
	for (int i = 0; i < n ; i++){
	    if (arr[i] == 1) {a--;}
	    else {a++;}
	    if (a > max ) {max = a;}
	    if (a<0) {a=0;}
	   // cout << a<< " ";	
	   }
	cout << ans + max;
}
