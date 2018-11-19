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
int tong[16],n,k,a[100005][5];
int main(){
    n=read(); k=read();
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=k;j++)a[i][j]=read();
	}
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=1;j<=k;j++)sum+=a[i][j]<<(j-1);
		tong[sum]=1;
	}
	if(tong[0]){
		puts("YES"); return 0;
	}
	for(int i=0;i<16;i++){
		for(int j=0;j<16;j++)if(i!=j&&tong[i]&&tong[j]){
			int flag=0;
			for(int k=0;k<4;k++)if((i&(1<<k))&&(j&(1<<k))){
				flag=1; break;
			}
			if(flag==0){
				//cout<<i<<" "<<j<<endl;
				puts("YES"); return 0;
			}
		}
	}
	puts("NO");
}