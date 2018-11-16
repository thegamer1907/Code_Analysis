#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int a[], int n, int num) {
	int l = 0;
	int h = n;
	int m = (l+h)/2;
	
	while(l<h) {
		if(a[l] == num || a[h] == num || a[m] == num) {
			return true;
		} else {
			if(num > a[m]) {
				l = m+1;
			} else {
				h = m-1;
			}
			m = (l+h)/2;
		}	
	}
	return false;
}

int main() {
	int n, t;
	cin>>n>>t;
	
	int a[n];
	for(int i=0; i<n-1; i++) {
		int temp;
		cin>>temp;
		
		a[i] = (i+1+temp);
	}
	
	int curr = a[0];
	while(true) {
		if(curr == t) {
			cout<<"YES";
			break;
			
		} else if(curr > t) {
			cout<<"NO";
			break;
		}
		curr = a[curr-1];
	}
	cout<<endl;
	
	/*int a[n];
	for(int i=0; i<n-1; i++) {
		int temp;
		cin>>temp;
		
		a[i] = (i+1+temp);
	}
	sort(a, a+n);
	
	binarySearch(a, n-2, t) ? cout<<"YES" : cout<<"NO";
	cout<<endl;*/

	return 0;
}
