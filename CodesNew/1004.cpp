#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	string s[m+n];
	for (int i=0;i<n+m;i++){
		cin>>s[i];
	}
	sort(s,s+m+n);
	int count=0;
	for (int i=0;i<n+m-1;i++){
		if (s[i]==s[i+1]){
			count++;
		}
	}
	if (n>m || (n==m&&count%2==1))
		cout<<"YES";
	else
		cout<<"NO";
}