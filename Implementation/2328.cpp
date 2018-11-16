#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
	string s;
	cin>>s;
	char p = 'T';
	int count = 0;
	for(int i = 0;i<n;i++){
	    if(s[i]==p){
	        count++;
	    }
	    else{
	        p = s[i];
	    }
	}
	cout<<count;
	return 0;
}