#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		v.push_back(str);
		if(str==s){
			printf("YES\n");
			return 0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			string x=v[i]+v[j];
			if((x[0]==s[0]&&x[1]==s[1])||(x[1]==s[0]&&x[2]==s[1])||(x[2]==s[0]&&x[3]==s[1])){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}