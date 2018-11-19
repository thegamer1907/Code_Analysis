#include <iostream>
#include <cstdio>
using namespace std;
char a[100],x;
int main(){
	int h,s,m,i,j,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	a[h]=1;
	if (m<5) a[12]=1;
	else a[m/5]=1;
	if (s<5) a[12]=1;
	else a[s/5]=1;
	for (i=t1;1;++i){
		if (i==13) i=1;
		if (i==t2){
			printf("YES\n");
			return 0;
		}
		if (a[i]) break;
	}
	for (i=t2;1;++i){
		if (i==13) i=1;
		if (i==t1){
			printf("YES\n");
			return 0;
		}
		if (a[i]) break;
	}
	printf("NO\n");
	return 0;
}
