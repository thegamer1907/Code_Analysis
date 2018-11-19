#include <bits/stdc++.h>
using namespace std;
string ans;
string a[105];
int main(){
	cin>>ans;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==ans){
			cout<<"YES";
			return 0;
		}
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			if(a[i][1]==ans[0]&&a[j][0]==ans[1]){
				cout<<"YES";
				return 0;
			}
			if(a[j][1]==ans[0]&&a[i][0]==ans[1]){
				cout<<"YES";
				return 0;
			}
		}
	cout<<"NO";
	return 0;
}