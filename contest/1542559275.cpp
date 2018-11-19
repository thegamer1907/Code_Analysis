#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag1,flag2,flag3;
	flag1=0;
	flag2=0;
	flag3=0;

	string s,p;
	cin>>s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p;
		if(p==s){
			cout<<"yes"<<endl;
			return 0;
		}else{
			if(p[0]==s[1]){
				flag1=1;
			}
			if(p[1]==s[0]){
				flag2=1;
			}
			if(flag1 && flag2){
				cout<<"yes"<<endl;
				return 0;
			}
		}
	}
	cout<<"no"<<endl;
	return 0;
}