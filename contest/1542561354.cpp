#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	int n;
	cin>>s>>n;
	string d[n];
	for(int i=0;i<n;i++)
		cin>>d[i];
	bool fl=false;
	vector<int>one,two;
	for(int i=0;i<n;i++){
		if(s==d[i] || (d[i][0]==s[1] && d[i][1]==s[0])){
			fl=true;
			break;
		}
		if(s[1]==d[i][0])
			one.push_back(i);
		if(s[0]==d[i][1])
			two.push_back(i);
	}
	if(fl)
		cout<<"YES";
	else if(one.size()>0 && two.size()>0){
		if(one.size()>1 || two.size()>1)
			cout<<"YES";
		else if(one[0]!=two[0])
			cout<<"YES";
		else cout<<"NO";
	}
	else cout<<"NO";
	return 0;
}