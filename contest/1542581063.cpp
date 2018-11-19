#include<bits/stdc++.h>
using namespace std;
string a[102];
int main(){
	string s;
	int n;
	cin>>s>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			string s1="",s2="";
			s1+=a[i][1];
			s1+=a[j][0];
			s2+=a[j][1];
			s2+=a[i][0];
			if(s[0]==a[i][1]&&s[1]==a[j][0]){
				cout<<"YES";
				return 0;
			}
			if(s[0]==a[j][1]&&s[1]==a[i][0]){
				cout<<"YES";
				return 0;
			}
			if(s[0]==a[i][0]&&s[1]==a[i][1]){
				cout<<"YES";
				return 0;
			}
			if(s[0]==a[j][0]&&s[1]==a[j][1]){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
}