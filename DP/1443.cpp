#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
int n;
int a[101];
int b;
int main(){
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int maxv=0,s=0;
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j++){
			s=0;
			for (int k=1;k<=n;k++){
				if (k>=i && k<=j){
					b=1-a[k];
				}else{
					b=a[k]; 
				}
				if (b==1) s++;
			}
			if (s>maxv) maxv=s;
		}
	}
	printf("%d",maxv);
	return 0;
} 