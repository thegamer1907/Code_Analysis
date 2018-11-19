#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
const int mod=1e9+7;
const int INF=2147483647;
bool vis[26][2];
int main(){
	string s;
	cin>>s;
	int n;
	cin>>n;
	while(n--){
		string t;
		cin>>t;
		if(s==t) return 0*puts("YES");
		vis[t[0]-'a'][0]=1;
		vis[t[1]-'a'][1]=1;
	}
	if(vis[s[0]-'a'][1] && vis[s[1]-'a'][0]) puts("YES");
	else puts("NO");
	return 0;
}