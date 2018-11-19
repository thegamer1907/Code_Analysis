#include <bits/stdc++.h>

using namespace std;

int main() {
		
	string resp;

	cin >> resp;

	int n;

	cin >> n;

	bool prim,sec;

	prim = sec = false;

	while(n--){
		string k;
		cin >> k;
		if(k[0] == resp[1]) sec = true;
		if(k[1] == resp[0]) prim = true;
		if(k == resp){
			sec = true;
			prim = true;
		}
	}

	if(prim and sec) printf("YES\n");
	else printf("NO\n");

	return 0;
}