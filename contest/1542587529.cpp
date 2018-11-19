#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string s;
	cin>>s;
	int n;
	cin>>n;
	int flag=0;
	string st;
	vector<string> v;
	for(int i=1;i<=n;i++){
		cin>>st;
		v.push_back(st);
	}
	for(int i=0;i<v.size();i++){
		string temp;
		temp=v[i][1];
		temp+=v[i][0];
		//cout<<temp<<" ";
		if(temp==s || v[i]==s){
			flag=1;
			break;
		}
		for(int j=i+1;j<v.size();j++){
			if((v[j][0]==s[1]&&v[i][1]==s[0])||(v[j][1]==s[0] && v[i][0]==s[1])){
				flag=1;
				break;
			}
			
		}
		if(flag){
			break;
		}
		
		
	}
	if(flag){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	return 0;
}