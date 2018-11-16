#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<math.h>
using namespace std;

int main(){
	char c;
	int tot1=0,tot2=0,ans=0;
	while (scanf("%c",&c)==1){
		if (c=='0'){
			tot1++;
			tot2=0;
			ans=max(tot1,ans);
		}
		else{
			tot1=0;
			tot2++;
			ans=max(tot2,ans);
		}
	}
	
	if (ans>=7) printf("YES");
	else printf("NO");
	
	return 0;
}