#include<bits/stdc++.h>
using namespace std;

int main(){
    string pass;
    cin>>pass;
    int n;
    cin>>n;
    int flag,f1,f2;
    f1=f2=flag=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s==pass)flag=1;
        if(pass[0]==s[1]){
            f1=1;
        }
        if(pass[1]==s[0]){
            f2=1;
        }
    }
    if(flag|| f1&&f2){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
