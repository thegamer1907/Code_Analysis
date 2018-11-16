#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[100], sub[100];
	int n, temp, oneinarray = 0; // original number of 1's in array
	cin >> n; 
	for(int i=0; i<n; i++){
		cin >> temp;
		if(temp == 1){
			arr[i] = -1;
			oneinarray++;
		}
		else arr[i] = 1;
	}
	sub[0] = arr[0];
	for(int i=1; i<n; i++){
			if(sub[i-1] > 0) sub[i] = sub[i-1] + arr[i]; // if till then the number of 0's are more than 1's
			else sub[i] = arr[i]; 
	}
	cout << oneinarray + *max_element(sub, sub+n);
	return 0;
}
