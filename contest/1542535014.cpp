#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	string s,t;
	int n;
	int v[10]; 
	while(cin>>s){
		memset(v,0,sizeof(v));	
		char a=s[0],b=s[1];
		cin>>n;
		int i;
		int f=0;
		for(i=0;i<n;i++){
			cin>>t;
			if(t[0]==a&&t[1]==b||t[0]==b&&t[1]==a) f=1;
			if(a==t[0]) v[0]=1;
			if(b==t[1]) v[1]=1;
			if(a==t[1]) v[2]=1;
			if(b==t[0]) v[3]=1;
		}
		if(v[2]&&v[3]) f=1;
		if(f) cout<<"YES\n";
		else cout<<"NO\n";
	}
}