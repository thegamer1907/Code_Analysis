#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string str ,s;
	int n ,i ,index=0 ,first=0 ,second=0;
	cin>>str>>n;
	while(n--){
		cin>>s;
		if(s==str) index=1;
		if(s[1]==str[0]) first=1;
		if (s[0]==str[1]) second=1;
	}
	
	if(index || (first && second)) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
