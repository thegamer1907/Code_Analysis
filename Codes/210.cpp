#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>

using namespace std;

int arr[1000001];

int main() {
	int n,k=1,a;	cin>>n;
	for (int i = 0; i < n; ++i) {
		cin>>a;
		for (int j = 0; j < a; ++j) {
			arr[k++]=i+1;
		}
	}
	int m,q;	cin>>m;
	for (int i = 0; i < m; ++i) {
		cin>>q;	cout<<arr[q]<<'\n';
	}
    return 0;
}
