#include <bits/stdc++.h>
#define N 100020
#define ll long long
using namespace std;
inline int read(){
	int x=0,f=1;char ch=getchar();
	while(ch>'9'||ch<'0')ch=='-'&&(f=0)||(ch=getchar());
	while(ch<='9'&&ch>='0')x=(x<<3)+(x<<1)+ch-'0',ch=getchar();
	return f?x:-x;
}
char ch[5];
char str[5];
int main(int argc, char const *argv[]) {
	scanf("%s", ch+1);
	int x = read();
	bool flag1 = 0, flag2 = 0;
	for (int i = 1; i <= x; i++) {
		scanf("%s", str+1);
		if (str[1] == ch[1] && str[2] == ch[2])
			return puts("YES")&0;
		if (str[1] == ch[2]) flag2 = 1;
		if (str[2] == ch[1]) flag1 = 1;
		if (flag1 && flag2) return puts("YES")&0;
	}
	puts("NO");
	return 0;
}
