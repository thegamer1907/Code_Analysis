#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;
string s[1500];
int main(){
	int n;
	int flag=0;
	string p;
	cin>>p;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			string s1;s1=s[i]+s[j];
			if(s1.find(p) != string::npos) {	
				flag=1;
				break;
			}
		}
	}
	if(!flag)printf("NO\n");
	else printf("YES\n");
	return 0;
}
