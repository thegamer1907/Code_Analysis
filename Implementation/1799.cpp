#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int cnt = 1;
	bool aman = 1;
	for(int i = 1; i < s.length(); i++){
		if(s[i] == s[i-1])cnt++;
		else cnt = 1;
		if(cnt == 7){
			aman = 0;
			break;
		} 
	}
	if(aman)printf("NO\n");
	else printf("YES\n");
}
