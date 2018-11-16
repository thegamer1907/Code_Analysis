#include <iostream>
#include<cstring>
using namespace std;

int main() {
	string s;
	cin>>s;
	int c_z=0,c_o=0;
	for(int i=0;s[i]!='\0';i++){
	    if(s[i]=='0'){
	        c_z++;
	        c_o=0;
	        if(c_z==7){
	            cout<<"YES";
	            return 0;
	        }
	    }
	    else{
	        c_o++;
	        c_z=0;
	        if(c_o==7){
	            cout<<"YES";
	            return 0;
	        }
	    }
	}
	cout<<"NO";
	return 0;
}