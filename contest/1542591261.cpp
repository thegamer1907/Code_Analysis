#include<iostream>

using namespace std;

int n;

int main(){
	bool yes = false;
	bool yes0 = false;
	bool yes1 = false;
	
	string s;
	string s1;
	cin>>s;
	cin>>n;
	
	for(int i = 0; i < n; i++){
		cin>> s1;
		if(s1 == s) yes = true;
		if(s1[0] == s[1]) yes1 = true;
		if(s1[1] == s[0]) yes0 = true;
	}
	if(yes || (yes1 && yes0)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}

