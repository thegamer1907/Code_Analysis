#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <set> 
#include <vector> 
using namespace std; 
int a[500005]; 
int n;  
int main(){
	int n; 
	cin >> n; 
	for (int i = 0; i < n; i++){
		cin >> a[i]; 
	}
	sort(a,a+n); 
	int p = n/2; 
	int ans = n; 
	for (int i = 0; i < n/2; i++){
		if (p == n) break; 
		while (1){
			if (p == n){
				break; // we consumed the other half  
			}
			if (a[i]*2 <= a[p]){
				ans--; 
				p++; 
				break; 
			}else{
				p++; 
			}
		}
	}
	cout << ans << endl; 
	return 0; 
}