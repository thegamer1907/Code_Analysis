#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
char sub[10];
char op[110][10];
int n;
bool ans=false,pre=false,end=false;
int main(){
	scanf("%s",sub);
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;++i){
		scanf("%s",op[i]);
		if(op[i][0]==sub[0] && op[i][1]==sub[1])  ans=true;
	}
	if(ans==true){
		printf("YES\n");return 0;
	}
	for(i=1;i<=n;++i){
		if(op[i][1]==sub[0])  pre=true;
		if(op[i][0]==sub[1])  end=true;
	}
	if(pre==true && end==true)  ans=true;
	if(ans==false){
		printf("NO\n");return 0;
	}
	else{
		printf("YES\n");return 0;
	}
	return 0;
}
