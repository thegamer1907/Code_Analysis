#include<bits/stdc++.h>
using namespace std;
string t,s[100];
int main(){
	int n;
	cin>>t;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	bool flag1=false,flag2=false;
	for(int i=1;i<=n;i++){
		if(t[0]==s[i][1]) flag1=true;
		if(t[1]==s[i][0]) flag2=true;
		if(t[0]==s[i][0]&&t[1]==s[i][1]) flag1=flag2=true;		
	}
	if(flag1==true&&flag2==true) puts("YES");
	else puts("NO");
}