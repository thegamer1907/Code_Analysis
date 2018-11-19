#include <bits/stdc++.h>
using namespace std;

int v=0,v2;
int main() {
	string x;
	int n ;
	cin >> x >> n;
	for(int i = 0 ; i < n ; i++){
		string r;
		cin >> r;
		if(r[0]==x[1])v=1;
		if(r[1]==x[0])v2=1;
		if(r==x){
			v=v2=1;
		}
	}
	if(v&&v2){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}