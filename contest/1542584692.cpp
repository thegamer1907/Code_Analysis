#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char a[5],b[5];
int main(){
	cin>>a;
	int n;
	scanf("%d",&n);
	bool flag=0,flag1=0;
	for(int i=1;i<=n;i++){
		scanf("%s",b);
		if(b[0]==a[0]&&b[1]==a[1]) {
			puts("YES");
			return 0;
		}
		if(b[0]==a[1]) flag=1;
		if(b[1]==a[0]) flag1=1; 
	}
	if(flag==1&&flag1==1) puts("YES");
	else puts("NO");
	return 0;
}
