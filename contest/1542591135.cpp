#include <bits/stdc++.h> 
#define fori(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	char a[2];int n;string s,p;
	cin>>p;
	a[0]=p[0];a[1]=p[1];int c=0,d=0;
	cin>>n;
	fori(i,n){
		cin>>s;
		if(s[1]==a[0]){
			c=1;
		}
		if(s[0]==a[1]){
			d=1;
		}
		
		if(s==p){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	if(c==1 && d==1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
}
