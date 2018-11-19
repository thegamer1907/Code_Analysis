#include <bits/stdc++.h>

using namespace std;

int main(){
	//ifstream fin("contest input.in");
	string x;
	cin >> x;
	int n;
	cin >> n;
	string a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	bool fs = false, sf = false, whole = false;
	for(int i = 0; i < n; i++){
		if(a[i][1] == x[0]){
			fs = true;
		}
		if(a[i][0] == x[1]){
			sf = true;
		}
		if(a[i] == x){
			whole = true;
		}
	}
	if((fs == true && sf == true) || whole == true){
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}
