#include <bits/stdc++.h>

using namespace std;

int main(){
	int n = 0;
	string mass;
	cin >> mass;
	cin >> n;
	string* mark = new string [n];
	for(int i = 0; i < n; i++){
		cin >> mark[i];
		if(mark[i] == mass){
			cout << "YES" << endl;
			return 0;
		}
	}
	for(int i = 0; i < n; i++){
		if(mark[i][0] == mass[1]){
			for(int j = 0; j < n; j++){
				if(mark[j][1] == mass[0]){
					cout << "YES" << endl;
					return 0;
				}
			}
		}
		if(mark[i][1] == mass[0]){
			for(int j = 0; j < n; j++){
				if(mark[j][0] == mass[1]){
					cout << "YES" << endl;
					return 0;
				}
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}