#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
#define LL long long
using namespace std; 

int s[100100];
int main(){
	int n,k;scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		for(int j=0;j<k;j++){
			int x;scanf("%d",&x);
			s[i]|=(x<<j);
		}	
	}
	for(int kk=0;kk<1<<k;kk++){
		int kkk=((1<<k)-1)^kk;
		bool s1=false,s2=false;
		for(int i=1;i<=n;i++){
			if((kk|s[i])==kk)s1=true;
			if((kkk|s[i])==kkk)s2=true;
			if(s1&s2)return printf("YES")*0;
		}	
	}
	return printf("NO")*0;
}