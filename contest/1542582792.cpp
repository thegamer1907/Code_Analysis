#include<bits/stdc++.h>
#define MAXN 26
using namespace std;
bool vis[MAXN+1],vis1[MAXN+1];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string str,str1;
	int x;
	cin>>str;
	cin>>x;
	while(x--){
		cin>>str1;
		if(str1==str){
		    cout<<"YES\n";
		    return 0;
		}
		vis[str1[0]-'a']=true;
		vis1[str1[1]-'a']=true;
	}
	if(vis1[str[0]-'a']&&vis[str[1]-'a'])
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}