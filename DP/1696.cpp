#include <iostream>
#include <string>
using namespace std;

int main(){
string str,s;

cin>>str;
s=str;
if(s.size()<4){
    cout<<"NO";
    return 0;
}

bool f1=false,f2=false;

for(int i=0; i<s.size(); i++){
if(s[i]=='A' && s[i+1]=='B'){
    f1=true;
    s[i]=s[i+1]='*';
    break;
}
}

for(int i=0; i<s.size(); i++){
    if(s[i]=='B' && s[i+1]=='A'){
        f2=true; break;
    }
}

if(f1==1 && f2==1){
    cout<<"YES";
    return 0;
}
s=str;
f1=0,f2=0;
for(int i=0; i<s.size(); i++){
    if(s[i]=='B' && s[i+1]=='A'){
        f1=1;
        s[i]=s[i+1]='*';
        break;
    }
}
for(int i=0; i<s.size(); i++){
    if(s[i]=='A'&&s[i+1]=='B'){
        f2=1;
        break;
    }
}

(f1==1&&f2==1)?cout<<"YES":cout<<"NO";
return 0;
}
