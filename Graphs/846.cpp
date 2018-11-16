#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t; cin >> n >> t;
	string s; cin >> s;

	for(int i=0; i<t; i++){
		for(int i=0; i<n-1; i++){
			if(s[i] == 'B' and s[i+1] == 'G'){
				char a = s[i];
				s[i] = s[i+1];
				s[i+1] = a;
				i++;
			}
		}
	}

	cout << s << endl;

	return 0;
}