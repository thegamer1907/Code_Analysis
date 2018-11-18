#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	bool vis=false;
	cin>>a;
	int n;
	cin>>n;
	string b[105];
	for(int i=0;i<n;i++){
		cin>>b[i];
		if(b[i]==a){
			cout<<"YES"<<endl;
			return 0;
		}
		if(b[i][1]==a[0])vis=true;
			if(b[i][0]==a[1]&&vis==true){
				cout<<"YES"<<endl;
				return 0;	
			}
	}
	for(int i=n-1;i>=0;i--){
		if(b[i][1]==a[0])vis=true;
			if(b[i][0]==a[1]&&vis==true){
				cout<<"YES"<<endl;
				return 0;	
			}
	}
	cout<<"NO"<<endl;
	return 0;
}