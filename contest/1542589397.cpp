#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<queue>
using namespace std;
const int maxn=10010;
const long long modn=1000000007;
char a[10]={};
char b[10]={};
int n;
bool f1=0,f2=0;
int main(){
	scanf("%s",&a);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",&b);
		if(b[0]==a[1]){
			f1=1;
		}
		if(b[1]==a[0]){
			f2=1;
		}
		if(b[0]==a[0]&&b[1]==a[1]){
			f1=1;f2=1;
		}
	}
	if(f1&&f2){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}