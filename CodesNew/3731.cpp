#include <iostream>
using namespace std;

int main() {
	int m, n, k, s, l, p;
	cin >> n;
	cin >> m;
	s = 0;
	int arr[n];
	for(int i= 0;i<n;i++){
		cin >> arr[i];
		s = s + arr[i];
	}
	l = s + m;
	int max = arr[0];
	for(int j = 0;j < n; j++){
		if (arr[j] > max)
		max = arr[j];
	
	}
	k = l / n;
	if( (l % n) > 0 )
	k++;
	if (k < max)
	cout << max <<" " ;
	else 
	cout << k << " " ;
	p = m + max;
	cout << p;	
	return 0;
}