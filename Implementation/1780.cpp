#include <bits/stdc++.h>
using namespace std;

main(){
	char c;
	int x = 1;
	cin >> c;
	int i = c - '0';
	bool b = false;
	while(cin >> c){
		if(c - '0' == i){
			x++;
		} else {
			x = 1;
			i = 1-i;
		}
		if(x >= 7){
			b = true;
			cout << "YES";
			break;
		}
	}
	if(!b){cout << "NO";};
}