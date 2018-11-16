#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main(){
	int flag=0;
	string s;
	cin >> s;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='B'){
			if(s[i-1]=='A'){
				for(int j=i+1; j<s.size(); j++){
					if(s[j]=='B'){
						if(s[j+1]=='A'){
							flag=1;
							cout << "YES";
							break;
						}
				    }
				}
			}
			if(flag==1){
			    break;
			}    
			if(s[i+1]=='A'){
				for(int j=i+2; j<s.size(); j++){
					if(s[j]=='A'){
						if(s[j+1]=='B'){
							flag=1;
							cout << "YES";
							break;
						}
					}
				}
			}
			if(flag==1){
				break;
			}
		}
	}
	if(flag==0){
		cout << "NO";
	}
}