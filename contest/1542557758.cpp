#include <bits/stdc++.h>
using namespace std;

string code;
vector<string> words;
int main(){

	int n;
	cin >> code;
	cin >> n;
	for(int i=0;i<n;i++){
		string aux;
		cin >> aux;
		words.push_back(aux);
	}

	bool found = false, found1=false, found2 = false, found3=false, found4 = false;
	for(int i=0;i<n;i++){
		if(words[i][0] == code[0] && words[i][1] == code[1]) found = true;
		if(words[i][0] == code[1]) found1 = true;
		if(words[i][1] == code[0]) found2 = true;
 	}

 	if(found || (found1&&found2))
 		cout << "YES" << endl;
 	else 
 		cout << "NO" << endl;


	return 0;
}
// 1508514402921
