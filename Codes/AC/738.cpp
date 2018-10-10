#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
inline int cal(int x){
	int res=0;
	while (x) res+=x%10,x/=10;
	return res;
}
int main(){
	int num=19,k;
	scanf("%d",&k);
	while (k){
		if (cal(num)==10) k--; num++;
	}
	printf("%d",num-1);
}