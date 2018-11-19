#include<cstdio>
#include<string>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<set>
#define oo 0x3f3f3f3f
using namespace std;
const int MAXN = 300+10;
int b[30];
int e[30];
int main (void)
{
	ios::sync_with_stdio(false);
	string str;
	cin >> str;
	int n; cin >> n;
	int flag = 0;
	for(int i = 1; i<=n; ++i)
	{
		string s;
		cin >> s;
		if(str==s) flag = 1;
		b[s[0]-'a'] = 1;
		e[s[1]-'a'] = 1;
	}
	if(b[str[1]-'a'] && e[str[0]-'a']  ) flag = 1;
	if(flag)cout<<"YES";
	else cout<<"NO";
} 
