#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;
map<string ,int >q;
int main()
{
	int a,b;
	cin>>a>>b;
	string s;
	for(int i=0;i<a;i++){
		cin>>s;
		q[s]++;
	}
	int chong=0;
	for(int i=0;i<b;i++){
		cin>>s;
		if(q[s]!=0){
			chong++;
		}
	}
	if(((chong&1)&&(a>=b))||((!(chong&1))&&(a>b))){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl; 
	return 0;
}