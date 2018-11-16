#include <bits/stdc++.h>
using namespace std;

string p;
long long c;
int main(){
	cin >> p;
	c = 1;
	for(int i = 1; i < p.size(); i++){
		if(p[i] == p[i-1]){
			c++;
			if(c == 7){
				cout << "YES";
				return 0;
			}
		} else c = 1;	
	}
	cout << "NO";
}
