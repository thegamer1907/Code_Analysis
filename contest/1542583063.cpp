#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a,b;
int t1=0,t2=0;
int n;
string s;
int main(){
	cin>>a>>b;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s;
		if(s[0]==b)t2=1;
		if(s[s.size()-1]==a)t1=1;
		if(s[0]==a&&s[1]==b){
			cout<<"YES";
			return 0;
		}
	}
	if(t1==1&&t2==1)cout<<"YES";
	else cout<<"NO";
	return 0;
}
