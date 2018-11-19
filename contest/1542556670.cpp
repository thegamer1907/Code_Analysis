#include <bits/stdc++.h>

using namespace std;

int j,i, k,n,ma;
bool ada, dep, bel;
string s, t;

int main() {
	cin>>t;
	scanf("%d", &n);
	ada = dep = bel =false;
	for(i=0;i<n;i++){
		cin>>s;
		if(s==t)
			ada =true;
		else{
			if(s[1] == t[0])
				dep= true;
			if(s[0] == t[1])
				bel = true;
		}
	}
	if((dep && bel)||ada)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}