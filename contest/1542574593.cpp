#include<bits/stdc++.h>
using namespace std;
int bo[3][30],n;
string s,t;
int main(){
	cin>>s;
	scanf("%d",&n); cin>>t;
	bo[1][t[0]-'a']=1; bo[2][t[1]-'a']=1;
	if (bo[1][s[0]-'a']&&bo[2][s[1]-'a']||bo[2][s[0]-'a']&&bo[1][s[1]-'a']){
			printf("YES"); return 0;
		}
	for (int i=2;i<=n;++i){
		cin>>t;
		if (s==t){
			printf("YES"); return 0;
		}
		bo[1][t[0]-'a']=1; bo[2][t[1]-'a']=1;
		if (bo[2][s[0]-'a']&&bo[1][s[1]-'a']){
			printf("YES"); return 0;
		}
	}
	printf("NO");
}