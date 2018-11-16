#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, t, A[100000];
	cin >> n >> t;
	for(int i = 1; i < n; i++)
		cin >> A[i];
		
	for(int i = 1; i <= n; i += A[i]){
		if(i == t){
			cout << "YES\n";
			return 0;
		}
		if(i > t){
			cout << "NO\n";
			return 0;
		}
	}
	cout << "NO\n";
	
	return 0;
}
