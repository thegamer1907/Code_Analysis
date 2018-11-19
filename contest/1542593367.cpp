#include<iostream>
#include<string>
using namespace std;
string a,b;int head,tail,flag,n,i;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);
	for(cin>>a>>n,i=1;i<=n;++i){
		cin>>b;
		if(b==a)flag=true;
		if(b[1]==a[0])head=true;
		if(b[0]==a[1])tail=true;
	}
	if(flag||(head&&tail))cout<<"YES"<<endl;else cout<<"NO"<<endl;
	return 0;
}