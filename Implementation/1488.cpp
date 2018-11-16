#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n,T;
	char str[101];
	cin>>str;
	bool flag=0;
	int cont=1;
	n=strlen(str);
	for(int i=1;i<n;i++){
		while((str[i]==str[i-1])&&i<n){
			cont++; i++;
			if(cont==7){ flag=1; break; }
		}
		if(flag) break;
		cont=1;
	}
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
}
