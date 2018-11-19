#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
typedef long long LL;
const int MAxn = 2e5 + 5;
const int MA_N = 5e3 + 5;

string s1, s2[MAxn], after = "0", pre = "0";
int vis[MAxn] = {0};

int main(){
	int n, flag = 0;
	cin >> s1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s2[i];
		if(s2[i][0] == s1[1]) after = s2[i];
		if(s2[i][1] == s1[0]) pre = s2[i];
		if(s2[i] == s1) flag = 1;
	}
	pre += after;
	if(pre.size() == 4) flag = 1;
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
}