#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string s[500001];
int ans[500001];
	
void comp(int a, int b){
	int tmp=0;
	for (tmp=0; tmp<min(ans[a], ans[b]); tmp++){
		if (s[a][tmp]>s[b][tmp]){
			ans[a]=tmp;
			return ;
		}
		if (s[a][tmp]<s[b][tmp]){
			return ;
		}
	}
	ans[a]=min(ans[a], ans[b]);
	return ;
}

int main(){
	int n;
	cin>>n;
	getline(cin, s[0]);
	for (int i=0; i<n; i++){
		getline(cin, s[i]);
		ans[i]=s[i].size();
	}
	for (int i=1; i<n; i++){
		comp(i-1,i);
	}
	for (int i=n-1; i>0; i--){
		comp(i-1, i);
	}
	for (int i=0; i<n; i++){
		cout<<s[i].substr(0, ans[i])<<endl;
	}
	return 0;
}