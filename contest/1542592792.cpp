#include <bits/stdc++.h>

using namespace std;

#define ll long long 

char psw[4];

int main(){
	scanf("%s",psw);
	
	int n;
	cin>>n;
	
	bool vis[4] = {0,0,0,0};
	bool ok = 0;
	for(int i=0;i<n;i++){
		char str[4];
		scanf("%s",str);
		if(psw[0]==str[0] && psw[1]==str[1]){
			ok = 1;
		}
		if(psw[1]==str[0]){
			vis[1] = 1;
		}
		if(psw[0]==str[1]){
			vis[0] = 1;
		}
		if(vis[0] && vis[1]){
	
			ok = 1;
		}
	}
	
	if(ok){
		puts("YES");
	}else{
		puts("NO");
	}
	
	return 0;
}
