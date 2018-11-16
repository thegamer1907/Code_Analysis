#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<math.h>
#include<cstdlib>
using namespace std;

int main(){
	int k,n,w;
	scanf("%d%d%d",&k,&n,&w);
	printf("%d",max(0,(k+w*k)*w/2-n));
	return 0;
}
 