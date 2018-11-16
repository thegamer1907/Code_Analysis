#include <bits/stdc++.h>
using namespace std;
int a,b;
string s;
int main(){
    cin>>s;
    s=s+" ";
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='A' and s[i+1]=='B'){
            a++;
        }
        if(s[i]=='B' and s[i+1]=='A'){
            b++;
        }
    }

    //cout<<a<<b;
    if((a>2 and b>0)or(a>0 and b>2)){
        cout<<"YES";
        return 0;
    }
    if(a==0 or b==0){
        cout<<"NO";
        return 0;
    }
    if(a==2 and b==2){
        cout<<"YES";
        return 0;
    }
    s=s+"  ";
    //cout<<s;
    int flag=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='A' and s[i+1]=='B' and s[i+2]=='A' and a==1 and b==1){
            flag=1;
        }
        if(s[i]=='B' and s[i+1]=='A' and s[i+2]=='B' and a==1 and b==1){
            flag=1;
        }
        if(s[i]=='A' and s[i+1]=='B' and s[i+2]=='A' and s[i+3]=='B'){
            flag=1;
        }
        if(s[i]=='B' and s[i+1]=='A' and s[i+2]=='B' and s[i+3]=='A' ){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}
