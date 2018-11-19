#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
#include<map>
#include<string>
#define maxn 205
using namespace std;

string str[105];
int main(){
	string s;
	int n;
	while(cin>>s){
		cin>>n;
		for(int i=0;i<n;i++) cin>>str[i];
		int f=0;
		for(int i=0;i<n;i++){
			if(str[i]==s){
				f=1;
				break;
			}
			if(str[i][1]!=s[0]) continue; 
			for(int j=0;j<n;j++){
				if(str[j][0]==s[1]){
					f=1;
					break;
				}
			}
		}
		if(f) puts("YES");
		else puts("NO");
	}
	return 0;
}
