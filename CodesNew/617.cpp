#include <bits/stdc++.h>
using namespace std;

int n, m, ig;
string str;
set <string> st;


int main(){
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++){
		cin >> str;
		st.insert(str);
	}
	for(int i=0; i<m; i++){
		cin >> str;
		if(st.count(str))
		ig++;
	}
	if(n>m){
		printf("YES\n");
		return 0;
	}
	if(m>n){
		printf("NO\n");
		return 0;
	}
	printf("%s\n", ig%2==0 ? "NO" : "YES");
	return 0;
}