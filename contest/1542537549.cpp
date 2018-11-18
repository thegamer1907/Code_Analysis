#include<iostream>
#include<string.h>
using namespace std;
int n,x=0,y=0;
string hack,str;
int main(){
	cin>>str;
	cin>>n;
	while(n--){
		cin>>hack;
		if(str[0]==hack[0]&&str[1]==hack[1]){x++;y++;}
		if(str[0]==hack[1])x++;
		if(str[1]==hack[0])y++;
	}
	x&&y?cout<<"YES\n":cout<<"NO\n";
	return 0;
}