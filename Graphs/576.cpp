#include<iostream>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	string a;
	cin>>a;
	if(t==0){
		for(int i=0; i<n; i++){
		cout<<a[i];
	}
		return 0;
	}
	int p=1;
	while(p<=t){
		for(int j=0; j<n; j++){
			if(a[j]=='B' && j!=n-1 && a[j+1]!='B'){
				a[j]='G';
				a[j+1]='B';
				j++;
			}
		}
		p++;
	}
	for(int i=0; i<n; i++){
		cout<<a[i];
	}
	return 0;
}
