#include <iostream>
#include<string>
using namespace std;

int main() {
	string s,s1;
	cin>>s;
	int n,a=0,b=0;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>s1;
		if(s1==s||(s1[1]==s[0]&&s1[0]==s[1])){
			cout<<"YES"<<endl;
			return 0;
		}
		else if(s[0]==s1[1]){
			++b;
		}
		else if(s[1]==s1[0]){
			++a;
		}
		if(a>0&&b>0){
			cout<<"YES"<<endl;
			return 0;
		}
	}
cout<<"NO"<<endl;

	return 0;
}