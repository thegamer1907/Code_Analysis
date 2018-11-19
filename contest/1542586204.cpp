#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	string paword;
	int   n;
	while(cin>>paword>>n){
		int i=0;string temp;
		int flag1=0,flag2=0,flag3=0;
		while(i<n){
			cin>>temp;
			if(temp==paword)flag1=1;
			if(temp[1]==paword[0])flag2=1;
			if(temp[0]==paword[1])flag3=1;
			i++;
		}
		if(flag1==1||(flag2==1&&flag3==1)){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
} 