#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int n;
	cin>>str>>n;
	string s[105];
	for(int i=1;i<=n;i++){
		cin>>s[i];
		if (((s[i][0]==str[0]&&s[i][1]==str[1])||s[i][1]==str[0]&&s[i][0]==str[1])){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if (s[i][1]==str[0]&&s[j][0]==str[1]){
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}