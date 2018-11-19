#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int a[3],b[105][3];
int main(){
	int n,flag=0;
	for(int i=1;i<=2;i++)
		scanf(" %c",&a[i]);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2;j++)
			scanf(" %c",&b[i][j]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
         if(b[i][2]==a[1]&&b[j][1]==a[2]) flag=1;
         if(b[i][1]==a[1]&&b[i][2]==a[2]) flag=1;
		}
	}
	if(flag==1) printf("YES\n");
	else printf("NO\n");
	return 0;
}
			  	  		  	   			 	  		   			