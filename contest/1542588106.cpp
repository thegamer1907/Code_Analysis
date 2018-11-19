#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<set>
#include<map>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define sqr(x) ((x)*(x))
#define mp make_pair
inline int read(){
	int x = 0; char ch = getchar(); bool positive = 1;
	for (; !isdigit(ch); ch = getchar())	if (ch == '-')	positive = 0;
	for (; isdigit(ch); ch = getchar())	x = x * 10 + ch - '0';
	return positive ? x : -x;
}
inline void write(int a){
    if(a>=10)write(a/10);
    putchar('0'+a%10);
}
inline void writeln(int a){
    if(a<0){
    	a=-a; putchar('-');
	}
	write(a); puts("");
}
string s,ch[105];
int n;
int main(){
    cin>>s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ch[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(ch[i][1]==s[0]&&ch[j][0]==s[1]){
				puts("YES"); return 0;
			}
		}
		if(ch[i]==s){
			puts("YES"); return 0;
		}
	}
	puts("NO");
}