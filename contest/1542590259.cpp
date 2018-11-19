#include<bits/stdc++.h>
using namespace std;

int main(){
	char pwd[3];
	cin>>pwd;
	int first = 0;
	int second = 0;
	int n;
	cin>>n;
	int ans = 0;
	char inp[3];
	while(n--){
		cin>>inp;
		if(inp[0]==pwd[0] && inp[1]==pwd[1]){
			ans = 1;
		}
		if(inp[0]==pwd[1] && inp[1] == pwd[0])
			ans = 1;
		if(inp[0]==pwd[1])
			second = 1;
		if(inp[1] == pwd[0])
			first = 1;
	}
	if(ans==1 || ((first+second)==2))
		cout<<"YES\n";
	else cout<<"NO\n";
}
