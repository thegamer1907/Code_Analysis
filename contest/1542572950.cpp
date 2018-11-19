#include<bits/stdc++.h>
using namespace std;

string s;
int n;
bool a,b;

int main(){
	ios::sync_with_stdio(0);
	
	cin >> s >> n ;
	while(n--){
		string temp ;
		cin >> temp;
		if(s == temp)a=b=1;
		if(s[0] == temp[1]) a=1;
		if(s[1] == temp[0]) b=1;
	}
	cout << (a && b ? "YES\n" : "NO\n") ;
}