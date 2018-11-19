#include <bits/stdc++.h>

using namespace std;



int main(int argc, char *argv[]) {

	string p;
	cin >> p;
	int n;
	cin >> n;
	vector<int> A(300), B(300);
	for (int i = 0; i < n; ++i) {
		string c;
		cin >> c;
		A[c[1]] = 1;
		B[c[0]] = 1;
		if(c==p){
			cout << "YES" << endl;
			return 0;
		}
	}
	if(A[p[0]] && B[p[1]]){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
