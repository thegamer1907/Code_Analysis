#include <bits/stdc++.h>
using namespace std;
char s[105][5];
int main(){
	char str[5];
	int n;
	cin>>str>>n;
	for(int i =0 ;i<n;i++)cin>>s[i];
	bool flag = 0;
	for(int i = 0;i<n;i++){
		if(s[i][0] == str[0] && s[i][1] == str[1]) flag = 1;
		for(int j = 0;j<n;j++){
			if(s[i][1] == str[0] && s[j][0] == str[1]) flag = 1;
		}
	}
	puts(flag?"YES":"NO");
}