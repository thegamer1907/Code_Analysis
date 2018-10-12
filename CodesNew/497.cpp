#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1e5 + 1;
int ar[N];
int main() {
	int n, t; 
	cin >> n >> t;
	for (int i = 0; i < n; i++) {
		scanf("%d", ar + i);
	}

	int l = 0,sum=0,res=0;
	for (int i = 0; i < n; i++) {
		sum += ar[i];
			while (sum > t) {
				sum -= ar[l];
				l++;
			}
			res = max(res, i - l + 1);
		
	}

	cout << res << endl;

//	system("PAUSE");
	return 0;
}