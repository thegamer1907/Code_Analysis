#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int elink[30][30];
char S[20];
char dat[1000][10];
int N;

int main(){
	scanf("%s",S);scanf("%d",&N);
	for(int i=1;i<=N;i++)scanf("%s",dat[i]);
	for(int i=1;i<=N;i++){
		if(dat[i][0]==S[0]&&dat[i][1]==S[1])return puts("YES"),0;
		for(int j=1;j<=N;j++){
			if(dat[i][1]==S[0]&&dat[j][0]==S[1])return puts("YES"),0;
		}
	}
	puts("NO");
	return 0;
}

