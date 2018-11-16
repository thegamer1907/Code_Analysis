#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
	char ch[10000];
	while(cin>>ch){
		int len = strlen(ch);
		int Max = 0;
		int num = 1;
		for(int i = 0 ; i < len -1 ; i ++){
			if(ch[i]==ch[i+1])
			num++;
			else
			num=1;
			Max = max(num,Max);
		}
		if(Max>=7)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
} 