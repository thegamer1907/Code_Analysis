#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n;
	cin>>n;
	bool lock=false,locker=false,lockerRoom=false;
	while(n--){
		string sa;
		cin>>sa;
		if(sa.length()>=2){
		if(s[0]==sa[1]) lock=true;
		if(s[1]==sa[0]) locker=true;
		if(s[0]==sa[0]&&s[1]==sa[1]) lockerRoom=true;
	}
	}
	if((lock&&locker)||(lockerRoom)) puts("YES");
	else puts("NO");
	return 0;
}
