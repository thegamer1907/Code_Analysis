#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 1;
string s;
int f[N],len;
void no(){puts("Just a legend");exit(0);}
int main(){
// 	freopen("readin.txt","r",stdin);
	cin >> s;
	for(int i = 1;i < s.size();i++){
		while(len && s[len] != s[i])len = f[len - 1];
		if(s[len] == s[i])len++;
		f[i] = len;
	}
	if(!f[s.size() - 1])no();
	for(int i = 0;i + 1 < s.size() - 1;i++)if(f[i] == f[s.size() - 1])return cout << s.substr(s.size() - f[s.size() - 1],f[s.size() - 1]),0;
	if(!f[f[s.size() - 1] - 1])no();
	cout << s.substr(s.size() - f[f[s.size() - 1] - 1],f[f[s.size() - 1] - 1]);
}