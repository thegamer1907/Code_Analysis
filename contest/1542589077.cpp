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
int h,m,s,t1,t2;
int main(){
    cin>>h>>m>>s>>t1>>t2;
    if(t1>t2)swap(t1,t2);
    if((h>=t1&&h<t2&&m>=t1*5&&m<t2*5&&s>=t1*5&&s<t2*5)||((h>=t1&&h<t2)==0&&(m>=t1*5&&m<t2*5)==0&&(s>=t1*5&&s<t2*5)==0))puts("YES"); else puts("NO");
}