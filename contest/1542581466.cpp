#include<bits/stdc++.h>
using namespace std;

int main() {
	char pas[3];
	int n;
	cin >> pas >> n;
	map<char,int>mp1,mp2;
	mp1.clear();
	mp2.clear();
	while(n--) {
		char x[3];
		cin >> x;
		if(strcmp(pas,x)==0) return puts("YES");
		mp1[x[1]]=1;
		mp2[x[0]]=1;
	} 
	if(mp1.count(pas[0])>0&&mp2.count(pas[1])>0) puts("YES");
	else puts("NO");
}