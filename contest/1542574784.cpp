#include <iostream>
#include <string>

// ALAS

using namespace std;

string s;

int n;

int main(){
	cin>>s>>n;
	string stark[n];
	
	for(int i=0;i<n;i++){
		cin>>stark[i];
		if(s==stark[i])
			return
				cout<<"YES",0;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			string k = "";
			
			k+=stark[i][1];
			k+=stark[j][0];
			
			if(k==s)
				return
					cout<<"YES",0;
		}
	}
	
	cout<<"NO";
}