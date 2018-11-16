#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n, a[100001], b[100001], ones = 0;
	cin >> n;
	
	for(int i = 1; i <= n; ++i) {
	    
	    cin >> a[i];
	    if(a[i]) b[i] = -1,++ones;
	    else b[i] = 1;
	}

	
	int C_sum = b[1], g_sum = b[1];
	
	for(int i = 2; i <= n; ++i){
	    
	    C_sum = max(C_sum + b[i], b[i]);
	    g_sum = max(C_sum, g_sum);
	}
	
	cout << ones + g_sum;
	
	return 0;
}
