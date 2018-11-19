#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
int n;
char s0[10], s[1000][10];
int main(){
	scanf("%s", s0);
	cin>>n;
	for (int i=1;i<=n;i++){
		scanf("%s", s[i]);
		if (s[i][0]==s0[0] && s[i][1]==s0[1]){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++){
			if (s[i][1]==s0[0] && s[j][0]==s0[1]){
				cout<<"YES"<<endl;
				return 0;
			}
		}
	cout<<"NO"<<endl;
	return 0;
}
