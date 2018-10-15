#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,i,j;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	for(i=n-2;i>=0;i--){
		if(s[i]>s[i+1]){
		
		for(int j=0;j<s[i].size();j++){	
		if(s[i][j]>s[i+1][j]){
		s[i].resize(j);
		}
		}
		}
		}
	
	
	for(i=0;i<n;i++){
		cout<<s[i]<<endl;
		}
}