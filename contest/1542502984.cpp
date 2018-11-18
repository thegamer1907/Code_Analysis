#include<bits/stdc++.h>
using namespace std;
string n,m[101],s;int sum,num,sam;
int main(){
	cin>>n>>sum;
	for(int i = 1;i <= sum;i++){
		cin>>m[i];
	}
	for(int i = 1;i <= sum;i++){
		s=m[i];
		if(s[0]==n[0]&&s[1]==n[1]){
			cout<<"YES";
			return 0;
		}
		if(s[0]==n[1]){
			sam++;
		}
		if(s[1]==n[0]){
			num++;
		}
	}
	if(sam>=1&&num>=1){
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}
