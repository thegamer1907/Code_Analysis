#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int n,tot;
char yuan[5],tmp[10000000],xin[200][3];

int main(){
	scanf("%s%d",yuan,&n);
	for(register int i = 1; i <= n; i++) scanf("%s",xin[i]);
	for(register int i = 1; i <= n; i++)
		for(register int j = 1; j <= n; j++)
			tmp[tot++] = xin[i][0], tmp[tot++] = xin[i][1], tmp[tot++] = xin[j][0], tmp[tot++] = xin[j][1];
	for(register int i = 1; i <= tot; i++)
		if(tmp[i-1] == yuan[0] && tmp[i] == yuan[1]) { printf("YES"); return 0; }
	printf("NO");
	return 0;
}