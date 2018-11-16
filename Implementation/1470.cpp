#include<iostream>
#include<string>

using namespace std;

int main() {
	string input,s1= "1111111",s2 = "0000000";
	cin>>input;
	if(input.find(s1) != string::npos || input.find(s2) != string::npos)
		cout<<"YES\n";
	else	
		cout<<"NO\n";
	return 0;
}
