#include <bits/stdc++.h>


#define myinarr int arr[n];

using namespace std;

typedef long long ll;


ll n;


int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	
	int n, k;
	
	cin >> n >> k;
	int arr[n];
	
	for(int i = 0; i < n; i++) {
	    cin >> arr[i];
	}
	
	int l = 1;
	int i = 0;
	while(l <= k) {
	    if(l == k) {
	        cout << "YES" << endl;
	        return 0;
	    }
	    
	    if(l <= n)
	        l += arr[l - 1];
	    //i++;
	    else break;
	}
	
	cout << "NO" << endl;
	
	
    return 0;
}