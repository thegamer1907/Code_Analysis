#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t,cont = 0;
	bool res = false;
	cin >> n >> t;
	int A[n-1];
	for (int k =0; k< n-1;k++){
		cin >> A[k];		
	}
	int i = 0;
	while (cont+1 < t and i<n-1){
		cont += A[i];
		i=cont;
	}
	if (cont+1 == t) res =true;
	res == true? cout << "YES" << endl:cout << "NO" << endl;
	return 0;
}