#include<bits/stdc++.h>
using namespace std;int n,t;string s;string x[99];
bool be(char c,bool b){
	if(!b){
	for(int i=0;i<n;i++)
		if(x[i][0]==c)return 1;}
	else
	for(int i=0;i<n;i++)
		if(x[i][1]==c)return 1;
	return 0;
}
bool b2(){
	for(int i=0;i<n;i++)
		if(s==x[i])return 1;
	return 0;
}
int main(){
	cin>>s>>n;
	for(int i=0;i<n;i++)
	cin>>x[i];
		if(b2()||be(s[0],1)&&be(s[1],0)){cout<<"YES";exit(0);
	}
cout<<"NO";}