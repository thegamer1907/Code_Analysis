#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<map>
using namespace std;
char s[1007][507];
int main()
{
	int a,b;
	int chong=0;
	cin>>a>>b;
	for(int i=0;i<a;i++){
		scanf("%s",s[i]);
	}
	for(int i=0;i<b;i++){
		char p[507];
		scanf("%s",p);
		for(int j=0;j<a;j++){
			if(strcmp(p,s[j])==0)chong++;
		}
	} 
	//cout<<chong<<endl;
	if(((chong&1)&&(a>=b))||((!(chong&1))&&(a>b))){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl; 
	return 0;
}