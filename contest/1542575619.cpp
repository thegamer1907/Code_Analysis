#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

char s[201],words[201][201];
int n,flag;

int main(){
	int i,j;
	cin>>s;cin>>n;
	for (i=1;i<=n;i++) cin>>words[i];
	flag=0;
	for (i=1;i<=n;i++){
		int p=strcmp(words[i],s);
		if (p==0){
			flag=1;
			break;
		}
		for (j=1;j<=n;j++){
			if (words[i][1]==s[0]&&words[j][0]==s[1]){
				flag=1;
				break;
			}
		}
	}
	if (flag) cout<<"YES\n";
	else cout<<"NO\n";
}
