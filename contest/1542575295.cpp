#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;

string s,str;
int n;
bool bo0[500], bo1[500];

int main(){
	cin>>s; cin>>n;
	for(int i=1;i<=n;i++){
		cin>>str;
		if(s==str){ puts("YES"); return 0; }
		bo0[str[0]]=true; bo1[str[1]]=true;
	}
	if(bo1[s[0]] && bo0[s[1]]) puts("YES");
	else puts("NO");
}