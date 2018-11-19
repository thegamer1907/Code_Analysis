#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	char slovo[3];
	cin>>slovo;
	cin>>n;
	char m[n][3];
	int flag1=0,flag2=0;
	for(int i=0;i<n;i++){
		cin>>m[i];
	if(slovo[0]==m[i][1])flag1=1;
	if(slovo[1]==m[i][0])flag2=1;
	
	if(slovo[0]==m[i][0]&&slovo[1]==m[i][1]){flag2=1;flag1=1;
	}
	
		
	}
	
	if(flag1*flag2)cout<<"YES";else cout<<"NO";
}