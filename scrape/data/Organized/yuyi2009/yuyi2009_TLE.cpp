#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char s1[20],s2[20],s3[20];
int ques(char a,char b,char c){
	if((a-b==1&&b-c==1)||(a-c==1&&c-b==1)||(b-c==1&&c-a==1)||(b-a==1&&a-c==1)
	||(c-a==1&&a-b==1)||(c-b==1&&b-a==1))
	return 1;
	else return 0;
}
int xiangtong3(char s[],char ss[],char sss[]){
	if(strcmp(s,ss)==0&&strcmp(ss,sss)==0)
		return 1;
		else return 0;
}
int xiangtong2(char s[],char ss[],char sss[]){
	if(strcmp(s,ss)==0||strcmp(ss,sss)==0||strcmp(s,sss)==0)
	return 1;
}
int lianxu3(char s[],char ss[],char sss[]){
	if(s[1]==ss[1]&&ss[1]==sss[1]&&ques(ss[0],s[0],sss[0])){
		return 1;
	}
	else return 0;
}
int lianxu2(char s[],char ss[],char sss[]){
	char a=s[0],b=ss[0],c=sss[0];
	if(s[1]==ss[1]&&ss[1]==sss[1]&&(a-b==1||b-a==1||c-a==1||a-c==1||b-c==1||c-b==1))
		return 1;
		else return 0;
}
int main(){
	while(scanf("%s",s1)){
		scanf("%s",s2);
		scanf("%s",s3);
		if(lianxu3(s1,s2,s3)||xiangtong3(s1,s2,s3))
			printf("0\n");
		else if(lianxu2(s1,s2,s3)||xiangtong2(s1,s2,s3))
			printf("1\n");
		else printf("2\n");
	}
}