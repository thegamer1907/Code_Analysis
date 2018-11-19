#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int n;
	scanf("%d",&n);
	vector<string> bark;
	for(int i = 0 ; i < n  ;i++){
		string str;
		cin >> str;
		bark.push_back(str);
	}
	bool flag = false;
	for(int i = 0 ; i < (int)bark.size();i++)
		if(bark[i][0] == s[0] && bark[i][1] == s[1])
			flag = true;
	for(int i = 0 ; i < (int)bark.size();i++){
		for(int j = 0 ; j < (int)bark.size(); j++){
			if(bark[i][1] == s[0]){
				if(bark[j][0] == s[1]){
					flag = true;
				}
			} 
		}
	}
	if(flag) printf("YES\n");
	else printf("NO\n");
	return 0;
}
 