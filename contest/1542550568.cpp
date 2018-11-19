#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;	//s[0],s[1]
	int n;
	cin >> n;
	string ss;
	bool f1 = false;
	bool f2 = false;
	while(n--){
		cin >> ss;
		if (ss[0] == s[1]) f1 = true;
		if (ss[1] == s[0]) f2 = true;
		if (ss == s){
			f1 = true;
			f2 = true;
		}
	}
	if (f1 && f2) cout << "YES" <<endl;
	else cout << "NO" <<endl;
	return 0;
}
	 	 			 			 			  					  	 	 	