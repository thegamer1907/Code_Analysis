#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
inline int read(){
	int x = 0,f = 1;char ch = getchar();
	while(ch < '0' || ch > '9'){if(ch == '-')f = -1;ch = getchar();}
	while(ch >= '0' && ch <= '9'){x = x*10+ch-'0';ch = getchar();}
	return x*f;
}

bool front[30],hind[30];
char s[20];
char a[20];
int n;

int main(){
	scanf("%s",a+1);
	n = read();
	for(int i = 1;i <= n;i++){
		scanf("%s",s+1);
		if(s[1] == a[1] && s[2] == a[2]){
			printf("YES\n");
			return 0;
		}
		front[s[1]-'a'] = true;
		hind[s[2]-'a'] = true;
	}
	if(front[a[2]-'a'] && hind[a[1]-'a']){
		printf("YES\n");
	}
	else printf("NO\n");
	return 0;
}