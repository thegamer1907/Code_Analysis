#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
char s[3], str[3];
void solve(){
	int flag = 0, flag1 = 0, flag2 = 0;
	scanf("%s", str);
	scanf("%d", &n);
	while( n-- ){
		scanf("%s", &s);
		if( s[0] == str[0] && s[1] == str[1]){
			flag = 2;
		}
		if( s[1] == str[0] ){
			flag1 = 1;
		}
		if( s[0] == str[1] ){
			flag2 = 1;
		}
	}
	if( flag || flag1 && flag2 ){
		printf("YES\n");
	}else printf("NO\n");
}
int main()
{
	solve();
	return 0;
 } 