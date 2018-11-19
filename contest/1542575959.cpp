#include <cstdio>
#include <cstring>
#include <iostream>

const int maxn = 110;
const int maxlen = 1010;

using namespace std;

bool ok;
int n;
string s[maxlen], key;

bool check(string x){
	int len1 = x.length();
	int len2 = key.length();
	for (int i = 0;i < len1;i ++){
		bool flag = true;
		int cnt = 0;
		for (int j = i;j < i + len2 && j < len1;j ++){
			if (x[j] != key[cnt ++]){
				flag = false;
				break;
			}
		}
		if (flag && cnt == len2) return true;
	}
	return false;
}
void dfs(string now){
	if (check(now)) ok = true;
	if (ok) return ;
	if (now.length() > key.length()) return ;
	for (int i = 0;i < n;i ++) dfs(now + s[i]);
}
int main(){
	cin >> key >> n;
	for (int i = 0;i < n;i ++) cin >> s[i];
	dfs("");
	if (ok) printf("YES");
	else printf("NO");
	return 0;
} 