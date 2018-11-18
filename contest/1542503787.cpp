#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
char s[10];
char a[10];
int n;
int change(char s[]){
	return (s[0]-'a')*27+(s[1]-'a');
}
int main(){
	scanf("%s%d",s,&n);
	int x=change(s);
	int flag=0;
	for (int i=1;i<=n;i++){
		scanf("%s",a);
		if (flag==3) continue;
		if (change(a)==x){
			flag=3;
		}
		if (a[0]==s[1] && flag!=1){
			flag+=1;
		}
		if (a[1]==s[0] && flag!=2){
			flag+=2;
		}
	}
	if (flag>=3) printf("YES");
	else printf("NO");
	return 0;
} 