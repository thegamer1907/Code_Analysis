#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	cout.precision(15);
	int n;
	double l,max;	
	cin >> n;
	cin >> l;
	double* array = new double[n];
	for(int i=0; i<n; i++){
		cin  >> array[i];
	}
	sort(array,array+n);
	max = array[0]*2;
	for(int i=1;i<n;i++){
		if(max<(array[i]-array[i-1])){
			max = array[i]-array[i-1];
		}
	}
	max = max<((l-array[n-1])*2) ? ((l-array[n-1])*2):max;
	cout << max/2 << endl;
	return 0;
}
// 1538713117802
