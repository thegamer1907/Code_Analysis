#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	string s;
	cin >> s;
	vector <string> v;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string str;
		cin >> str;
		if(str == s){
			cout << "YES";
			return 0;
		}
		v.push_back(str);
	}
	for(int i = 0; i < n; i++){
		string str1 = v[i];
		for(int j = 0; j < n; j++){
			string str2 = v[j];
			if(str1[1] == s[0] && str2[0] == s[1]){
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}