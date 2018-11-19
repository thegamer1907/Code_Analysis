#include<iostream>
#include<cstdio>
#include<map>
#include<set>
#include<string>
#include<cstring>
using namespace std;
bool ok[2];
char pas[3],tt[3];
int main(){
	cin>>pas;
	int n;
	cin>>n;
	bool OK=0;
	for(int i=1;i<=n;i++){
		cin>>tt;
		//cout<<tt<<' '<<pas<<endl;
		//cout<<strcmp(tt,pas)<<endl;
		if(!strcmp(tt,pas)){
			OK=1;
		}
		if(pas[1]==tt[0])ok[0]=1;
		if(pas[0]==tt[1])ok[1]=1;
		if(ok[0]&&ok[1])OK=1;
	}
	if(OK)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}