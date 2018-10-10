#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
const unsigned int P=233;
int n,g=0;
unsigned int p[1111111],a[1111111];
char s[1111111];
unsigned int _(int x,int y){
	return a[y]-a[x-1]*p[y-x+1];
}
int __(int x){
	int l=1,r=n-x,m;
	while (l<=r){
		  m=(l+r)>>1;
		  if (_(1,m)==_(x,x+m-1)){
		  	 l=m+1;
   		  }
 		  else{
		  	   r=m-1;
		  }
	}
	g=max(g,r);
}
int main(){
	scanf("%s",s+1);
	n=strlen(s+1);
	p[0]=1;
	for (int i=1;i<=n;i++){
		p[i]=p[i-1]*P;
	}
	for (int i=1;i<=n;i++){
		a[i]=a[i-1]*P+s[i];
	}
	for (int i=2;i<=n;i++){
		__(i);
	}
	for (int i=g;i;i--){
		if (_(1,i)==_(n-i+1,n)){
		   for (int j=1;j<=i;j++){
		   	   printf("%c",s[j]);
  		   }
		   return 0;
        }
	}
	printf("Just a legend");
	return 0;
}
