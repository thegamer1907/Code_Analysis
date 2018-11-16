#include<bits/stdc++.h>
using namespace std;
int main(){
 string s;
 cin>>s;
 int f1=0,f2=0,f3=0;
 for(int i=0;i<s.size();i++){
    if(f3==0 && (s[i]=='A' && s[i+1]=='B' && s[i+2]=='A')){
        f3=1;
        i+=2;
        continue;
    }
    if(f3==0 && (s[i]=='B' && s[i+1]=='A' && s[i+2]=='B')){
        f3=1;
        i+=2;
        continue;
    }
    if(f1==0 && s[i]=='A' && s[i+1]=='B'){
        f1=1;
        i++;
        continue;
    }
    if(f2==0 && s[i]=='B' && s[i+1]=='A'){
        f2=1;
        i++;
        continue;
    }
 }
 if(f3==1 &&(f1==1 || f2==1)){
        cout<<"YES";
        return 0;
 }
 if(f1==1 && f2==1){
        cout<<"YES";
        return 0;
    }
 cout<<"NO";
 return 0;
}
