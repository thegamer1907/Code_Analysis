#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	int n;
	cin>>str>>n;
	string s[n];
	bool dpn=false,blkg=false;
	for(int i=0;i<n;i++){
		cin>>s[i];
		if(s[i][1]==str[0]){
			dpn=true;
		}
		if(s[i][0]==str[1]){
			blkg=true;
		}
		
		if(s[i][0]==str[0]&&s[i][1]==str[1]){
			dpn=true;
			blkg=true;
		}
	}	
	
	if(dpn&&blkg) printf("YES\n");
	else printf("NO\n");
}