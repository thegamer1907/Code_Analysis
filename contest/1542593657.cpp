#include<bits/stdc++.h>
using namespace std;
string ch[105];
bool check(string &a,string &r){
	for(int i=0;i<=2;i++){
		if(a[i]==r[0]&&a[i+1]==r[1])	return true;
	}
	return false;
}
int main(){
	string res;
	cin>>res;
	int n;cin>>n;
	for(int i=1;i<=n;i++)	cin>>ch[i];
	for(int i=1;i<=n;i++)	for(int j=1;j<=n;j++){
		string tmp=ch[i]+ch[j];
		if(check(tmp,res))	{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
}
