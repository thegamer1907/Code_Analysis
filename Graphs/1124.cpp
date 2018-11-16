#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	bool ans = 0;
	cin >> n >> t;
	int a[n];
	for(int i=0; i<n-1; i++)
		cin >> a[i];
	int home=0;
	while(!ans &&home <= t-1){
		(home == t-1) ? ans = 1 : home += a[home];
		}
	(ans) ? cout << "YES" : cout << "NO";
	return 0;
}
