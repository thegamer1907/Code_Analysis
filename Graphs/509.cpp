#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	while(k--){
		for(int i=1; i<s.size(); i++)
		if(s[i-1]=='B'&&s[i]=='G'){
			swap(s[i-1],s[i]);
			i++;
		}
	}
	cout<<s;
	return 0;
}