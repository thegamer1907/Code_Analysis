#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<math.h>
#include<cstdlib>
using namespace std;

char q[101];
bool mark[101];

int main(){
	int n,t;
	scanf("%d%d",&n,&t);
	scanf("%s",q);
	
	for (int i=1; i<=t; i++){
		memset(mark,0,sizeof(mark));
		for (int j=1; j<n; j++)
			if (q[j]=='G' && q[j-1]=='B') mark[j]=1;
		for (int j=1; j<n; j++)
			if (mark[j]) swap(q[j],q[j-1]);
	}
	printf("%s",q);
	return 0;
}
 