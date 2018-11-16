#include <iostream>

using namespace std;

int main(){
	int n,t,aux;
	cin>>n>>t;
	bool com=false;
	int pos=1;
	for(int i=1;i<=n-1;i++){
		cin>>aux;
		if(i==pos){
			pos=pos+aux;
		}
		if(pos==t){
			com=true;
		}
	}
	if(com)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}