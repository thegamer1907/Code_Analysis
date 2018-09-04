#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define ll long long
#define FOR(i,n) for(int i = 0; i < n; i++)
#define pb push_back
#define MAX 100000

using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];


	FOR(i,n){
		int num;
		cin >> num;
		
		a[i] = num/n;
		if(num%n >= i+1){
			a[i]++;
		}
		
	}
	
	int minimo = 1e9;
	FOR(i,n){

		minimo = min(a[i],minimo);
	}
	
	FOR(i,n){
		if(a[i] == minimo){
			cout << i+1 << endl;
			break;
		}
	}
	
	
	
	
	return 0;
}

