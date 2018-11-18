#include <bits/stdc++.h>
	
using namespace std;

main(){
string s,s2;
cin>>s;
int n;
bool ok1=false,ok2=false;
cin>>n;
while(n--){
	cin>>s2;
	if(s2[1]==s[0]&&ok1==false){
		ok1=true;
	}
	if(s2[0]==s[1]&&ok2==false)ok2=true;
	if(s2==s)ok1=ok2=true;
}
if(ok1&&ok2)cout<<"YES";
else  cout<<"NO";

}