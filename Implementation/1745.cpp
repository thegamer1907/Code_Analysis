#include <bits/stdc++.h>
using namespace std;
#define NO

int main(){

	#ifdef OJ
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s;
	cin >> s;
	int zero=0,one=0;
	bool ok = false;
	for(int i=0; s[i]; i++){
		if(s[i] == '0'){
			zero++;
			one = 0;
		}
		else{
			one++;
			zero = 0;	
		}
		if (zero >= 7 || one >= 7){
			ok = true;
			break;
		}
		
	}
	if (ok){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}

	return 0;
}