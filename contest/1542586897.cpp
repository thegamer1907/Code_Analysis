#include <iostream>
#include <string>
using namespace std;
int main(){
	string str1;
	getline(cin, str1);
	int a;
	cin >> a;
	cin.ignore();
	string *str2 = new string[a];
	for(int i = 0; i < a; i++){
		getline(cin,str2[i]);
	}
	for(int i = 0; i < a; i++){
		if(str2[i] == str1){
			cout << "YES" << endl;
			return 0;
		}
	}
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a; j++){
			string str3 = "";
			char ch1 = str2[i][1];
			char ch2 = str2[j][0];
			str3 += ch1;
			str3 += ch2;			
			if(str3 == str1){
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}