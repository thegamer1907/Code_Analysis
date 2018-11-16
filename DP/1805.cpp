// Solution by Bektemir Srazhdinov
#include <bits/stdc++.h>
using namespace std;
const int N=1234567;
const int M=(int)1e9+7;
bool ok1=false,ok2=false;
string s;
int main(){
	cin>>s;
	for(size_t i=0;i<s.size()-1;i++){
		if(ok1){
			if(s.substr(i,2)=="BA"){
				ok2=true;
				i++;
			}
		}else{
			if(s.substr(i,2)=="AB"){
				ok1=true;
				i++;
			}
		}
	}
	ok1=false;
	for(size_t i=0;i<s.size()-1;i++){
		if(ok1){
			if(s.substr(i,2)=="AB"){
				ok2=true;
				i++;
			}
		}else{
			if(s.substr(i,2)=="BA"){
				ok1=true;
				i++;
			}
		}
	}
	if(ok2){
		puts("YES\n");
	}else{
		puts("NO\n");
	}
    return 0;
}
