#include<iostream>
#include<cstring>;
using namespace std;
int main(){
	int n,aa=0,bb=0;
	string a,b;
	cin>>a;
	cin>>n;
	while(n--){
		cin>>b;
		if(a==b){
			aa=bb=1;
		}
		if(a[1]==b[0]){
			bb=1;
		}
		if(a[0]==b[1]){
			aa=1;
		}
	}
	if(aa==1&&bb==1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}