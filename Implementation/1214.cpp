#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<queue>
#define rep(i,a,b) for(int i=a;i<(b);++i)
typedef long long ll;
typedef double db;
using namespace std;
char a[55];
void swap(char &a,char &b){
	char c = a;
	a = b;
	b = c;
}
int main(){
	int n,t;
	scanf("%d %d",&n,&t); 
	scanf("%s",a);
	rep(j,0,t)
		for(int i=n-1;i>=1;--i){
			if(a[i]=='G'&&a[i-1]=='B'){
				swap(a[i],a[i-1]);
				--i;
			}
		}
	printf("%s",a);
	return 0;
} 
