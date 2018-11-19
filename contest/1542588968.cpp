#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


bool f(string str, vector<string> s){
	for (int i = 0; i < s.size(); ++i){
		
		for(int j = i; j < s.size();++j){
			if ((s[i] == str) || (s[i][1]==str[0] && s[j][0] == str[1]) ||
				(s[j][1]==str[0] && s[i][0] == str[1])){
				return true;
			}
		}
	}
	return false;
}
int main(){
	string str, s;
	cin >> str;
	int n;
	cin >> n;
	vector <string> a(n);

	for (int i=0; i<n; ++i){
		cin >> a[i];
	}
	cout << (f(str, a)? "YES" : "NO") << endl;

	return 0;
}