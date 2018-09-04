#include <bits/stdc++.h>

using namespace std;

void calculateZ(string &s, vector<int> &z){
	int n = s.size();
	z[0] = s.size();
	int L = 0, R = 0;
	for (int i = 1; i < n; i++) {
		if (i > R) {
			L = R = i;
			while (R < n && s[R-L] == s[R]) R++;
			z[i] = R-L; R--;
		} else {
			int k = i-L;
			if (z[k] < R-i+1) z[i] = z[k];
			else {
				L = i;
				while (R < n && s[R-L] == s[R]) R++;
				z[i] = R-L; R--;
			}
		}
	}
}

int main(){
	string s;
	cin >> s;
	vector<int> z(s.size());
	calculateZ(s, z);
	int solutionSize = 0;
	int maxZ = 0;
	for (int i = 1; i < z.size(); i++){
		if (i + z[i] == z.size()){//It is prefix and suffix 
			if (maxZ >= (int)(z.size()) - i){//Si se habia encontrado uno en medio mayor que ese, ya tenemos la solucion
				solutionSize = z.size() - i;
				break;
			}
		}
		maxZ = max(maxZ, z[i]);//maximum that is prefix and in the middle
	}
	if (solutionSize == 0){
		cout << "Just a legend" << endl;
	} else {
		cout << s.substr(0, solutionSize) << endl;
	}
}
