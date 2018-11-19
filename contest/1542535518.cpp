#include <bits/stdc++.h>
using namespace std;
int main(){
	char d,e;
	string a;
	string b[105];
	int c;
	cin>>a;
	d=a[0];
	e=a[1];
	cin>>c;
	int f=0,g=0;
	for(int i=0;i<c;i++){
		cin>>b[i];
		if(b[i]==a){
			cout<<"YES";
			return 0;
		}
		if(b[i][0]==e){
			f=1;
		}
		if(b[i][1]==d){
			g=1;
		}
	}
	if(g==1&&f==1){
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
}