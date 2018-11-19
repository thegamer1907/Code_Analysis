#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
string S,a[105];
int main(){
	cin>>S;int n;cin>>n;
	for(int i=1;i<=n;i++){cin>>a[i];if(S==a[i]){cout<<"YES";return 0;}}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(S[0]==a[i][1]&&S[1]==a[j][0]){cout<<"YES";return 0;}
		}
	}cout<<"NO";
	return 0;
}
