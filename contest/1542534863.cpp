#include <iostream>
using namespace std;
int main(){
	char s[3],ts[3];bool a=false,b=false;int i,n;
    cin>>s>>n;for(i=0;i<n&&!(a&&b);i++){
    	cin>>ts;if(s[0]==ts[0]&&s[1]==ts[1])a=b=true;
    	if(s[0]==ts[1])a=true;if(s[1]==ts[0])b=true;
	}cout<<(a&&b?"YES":"NO")<<endl;return 0;
} 