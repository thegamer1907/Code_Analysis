#include <bits/stdc++.h>
using namespace std;

int ini[26];
int fin[26];

int main(){
	string in;
	cin >> in;
	int n;
	cin >> n;
	bool p = false;
	for (int i = 0; i < n; ++i)
	{
		string aux;
		cin >> aux;
		if(aux == in) p = true;
		ini[aux[0]-'a'] = 1;
		fin[aux[1]-'a'] = 1;
	}

	p = p || (ini[in[1]-'a'] && fin[in[0]-'a']);
	if(p){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}

	return 0;
}