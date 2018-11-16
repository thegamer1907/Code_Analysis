#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int t;
	cin>>t;
	string s;
	cin>>s;
	
	int k=0;
	for(int j=0;j<t;j++){
		for(int i=0;i<s.length()-1;i++){
			if(s[i]=='B' && s[i+1]=='G'){
				s[i]='G';
				s[i+1]='B';
				i++;
			}
	
		}
	}
	
	cout<<s;
	return 0;
}