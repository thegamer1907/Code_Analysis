#include <iostream>
#include <cstring>
using namespace std;

int main(){

	int i,d;
	char n;
	string s;
	cin>>s;
	d=0;
	n=s[0];
	for(i=0;s[i]!='\0';i++){
        if(s[i]==n){
            d++;
            if(d>=7)break;
        }
        else {n=s[i];
        d=1;
        }
	}
	if(d>=7)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
