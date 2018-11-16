#include <iostream>
using namespace std;

int main() {
	int n, k, j = 0;
	cin>>n>>k;
	int *a = new int[n];
	for ( int i = 0; i < n; i++)	cin>>a[i];
	for (int i = 0; i < n; i++)
	if (a[i] >= a[k-1] && a[i] > 0)   j++; 
	cout<<j;
	delete[] a;
	return 0;   
}