#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n;
char a,b,c,d;
int main(){
	//freopen("A.in","r",stdin);
	cin>>a>>b;
	scanf("%d",&n);
	int t=0,p=0;
	for(int i=1;i<=n;i++){
		cin>>c>>d;
		if((c==a&&d==b)||(c==b&&d==a)){
			printf("YES\n");return 0;
		}
		if(c==b)t=1;
		if(d==a)p=1;
		if(t&&p){
			printf("YES\n");return 0;
		}
	}
	printf("NO\n");
	return 0;
}
