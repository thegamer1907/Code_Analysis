#include <bits/stdc++.h>
using namespace std;
string t[100001];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	int n;
	cin>>s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i];
		if(t[i]==s){
			cout<<"YES";
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		if(t[i][1]==s[0]){
			for(int j=1;j<=n;j++){
				if(t[j][0]==s[1]){
					cout<<"YES";
					return 0;
				}
			}
		}
	}
	cout<<"NO";
	return 0;
}