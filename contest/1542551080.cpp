#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	string pass,tmp;
	vector <string> v;

	int n;

	cin >> pass;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> tmp;
		v.push_back(tmp);
	}

	bool ans = false,first_found = false,second_found = false;

	for(int i = 0; i < n; i++){
		if(v[i] == pass)
			ans = true;
	}

	if(ans){
		cout << "YES" << endl;
		return 0;
	}

	for(int i = 0; i < n; i++){
		if(v[i][1] == pass[0])
			first_found = true;
	}

	if(first_found){
		for(int i = 0; i < n; i++){
			if(v[i][0] == pass[1]){
				second_found = true;
			}
		}

		if(second_found)	cout << "YES" << endl;
		else	cout << "NO" << endl;
	}
	else	cout << "NO" << endl;
}