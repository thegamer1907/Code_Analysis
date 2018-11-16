#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int ans =0;
	int n ; cin >>n ;
	int arrb [n];
	for (int i = 0; i < n ; i++){cin >> arrb[i];}
    int m ; cin >> m ;
    int arrg[m];
   for (int i = 0 ; i < m; i++){cin >> arrg [i];}
    sort(arrb , arrb+n);
    sort(arrg , arrg+m);
	int i = 0; int j = 0;
	while (i< n && j <m){
	    if (abs(arrb[i] - arrg[j]) <= 1) {ans++ ; i++ ; j++;}
	    else if (arrb[i]> arrg[j]){j++;}
	    else {i++;}
	}
	cout << ans;
}
