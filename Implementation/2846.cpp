#include <bits/stdc++.h>
using namespace std;
char s[105];
int main(){
	scanf("%s", s+1);
	int n = strlen(s+1);

	bool ok = 1;
	for(int i=2;i<=n;i++){
		if('a' <= s[i] && s[i] <= 'z'){
			ok = 0;
			break;
		}
	}
	if(ok){
		for(int i=1;i<=n;i++){
			if('a' <= s[i] && s[i] <= 'z'){
				s[i] = s[i]-'a'+'A';
			}
			else{
				s[i] = s[i]-'A'+'a';
			}
		}
	}
	printf("%s", s+1);
}