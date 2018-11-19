#include <iostream>
using namespace std;

int main() {
    string code, sub;
    bool begin=false, end=false, e=false;
	int n;
    cin>>code;
    cin>>n;
    for(int i=0;i<n;i++){
     cin>>sub;
     if(code[0]==sub[1]) {  
       end=true;
       if(code[1]==sub[0]) begin=true;
     }
     else if(code[1]==sub[0]) {
       begin=true;
       if(code[0]==sub[1]) end=true;
     }
     else if( (code[0]==sub[0]) && (code[1]==sub[1]) ) e=true;
    }
    if(e) cout<<"YES";
    else if( (begin) && (end) ) cout<<"YES";
    else cout<<"NO";
	return 0;
}