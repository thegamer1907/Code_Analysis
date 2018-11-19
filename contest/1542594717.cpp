#include<bits/stdc++.h>
using namespace std;
string t;
string s[111];
int n;
int main(){
	cin>>t;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>s[i];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			string str=s[i]+s[j];
			if(str.find(t)!=-1){
				puts("YES");
				return 0;
			}
		}
	puts("NO");
	return 0;
}