#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int n,a,x=0,y=0,z=0;
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
		scanf("%d",&a);
		x+=a;
		scanf("%d",&a);
		y+=a;
		scanf("%d",&a);
		z+=a;
	}
	if (x==0 && y==0 && z==0) printf("YES");
	else printf("NO");
	return 0;
}