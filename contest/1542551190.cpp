#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int main(){
	char a[5],b[500];
	int n, flag, dis;
	while(~scanf("%s", a+1)){
		scanf("%d",&n);
		flag = 0;
		for(int i = 1; i <= n*2; i+=2){
			scanf(" %c%c", &b[i], &b[i+1]);
			if(b[i] == a[1] && b[i + 1] == a[2]) flag = 1;
		}
		dis = 0;
		if(flag == 1) printf("YES\n");
		else{
			for(int j = 2; j <= n*2; j+=2){
				for(int k = 1; k <= n*2 - 1; k+=2){
					if(b[j] == a[1] && b[k] == a[2]) dis = 1;
				}
			}
			if(dis == 1) printf("YES\n");
			else printf("NO\n");
		}
	}
}
		 		 	 		 		   	   				  	  		