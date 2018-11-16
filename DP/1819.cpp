#include <iostream>
#include <string>
using namespace std;
 
int main() {
	int a=0,b=0,j=0;
	string s;
	cin>>s;
	if(s=="ABA"|| s=="BAB"){
	cout<<"NO";
	return 0;
	}
	for(int i=0;i<s.size();i++){
	if(s[i]=='A'&&s[i+1]=='B'){
	a++;
	if(s[i+2]=='A'){
	i=i+2;
	j++;
	}
	}	
	if(s[i]=='B'&&s[i+1]=='A'){
	b++;
	if(s[i+2]=='B'){
	i=i+2;
	j++;
	}
	}
	}
	if((a>0 && b>0) || (a>=2 && j>0) || (b>=2 && j>0)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
 
	// your code goes here
	return 0;
}