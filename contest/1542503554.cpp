#include <bits/stdc++.h>
using namespace std;
int main(){
	char a,b;
	cin>>a>>b;
	int c;
	cin>>c;
	char ch1[c+10],ch2[c+10];
	for(int i=1;i<=c;i++){
		cin>>ch1[i]>>ch2[i];
		if(ch1[i]==a)
			if(ch2[i]==b){
				cout<<"YES"<<endl;
				return 0;
			}
	}
	for(int i=1;i<=c;i++){
		if(ch2[i]==a){
			for(int j=1;j<=c;j++){
				if(ch1[j]==b){
					cout<<"YES"<<endl;
					return 0;
				}
			}
			break;
		}
	}
	cout<<"NO"<<endl;
	
	return 0;
}
