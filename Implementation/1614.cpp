#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int flag = 0;
	int count0 = 0;
	int count1 = 0;
	for(int i = 0;i<s.length();i++){
	    if(s[i]=='0'){
	        count1 = 0;
	        count0++;
	    }
	    else{
	        count0 = 0;
	        count1++;
	    }
	    if(count1==7||count0==7){
	        flag = 1;
	        break;
	    }
	}
	if(flag==0)
	cout<<"NO";
	else
	cout<<"YES";
	return 0;
}