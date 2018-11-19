#include <bits/stdc++.h>
using namespace std;
int main(){
	char a, b;
	cin>>a>>b;
	int n;
	cin>>n;
	bool f = false, s = false;
	string ans = "";
	while(n!=0){
		char c,d;
		cin>>c>>d;
		if(a==c && b==d){
			ans = "YES";
		}
		else if(b==c && a==d){
			ans = "YES";
		}
		else if(b==c){
			f = true;
		}
		else if(a==d){
			s = true;
		}
		n--;
	}
	if(ans!=""){
		cout<<ans;
	}
	else if(f && s){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
    return 0;
}
