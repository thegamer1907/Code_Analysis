#include<bits/stdc++.h>
using namespace std;
char s[20],x[20];
int n;
int main(){
	scanf("%s",s);
	scanf("%d",&n);
	bool one,two,three,four;
	one=two=three=four=false;
	for(int i=1;i<=n;i++){
		scanf("%s",x);
		if(x[0]==s[1])two=true;
		if(x[1]==s[0])three=true;
		if(x[1]==s[1]&&s[0]==x[0]){
			printf("YES\n");
			return 0;
		}
	}
//	if(one&&four){
//		printf("YES\n");
//		return 0;
//	}
	if(two&&three){
		printf("YES\n");
		return 0;
	}	
	printf("NO\n");
	return 0;
} 
