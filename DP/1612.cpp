#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=s.find("AB");
    int b=s.find("BA",a+2);
    int c=s.find("BA");
    int d=s.find("AB",c+2);
    if(a!=-1 && b!=-1){
        cout<<"YES"<<endl;
    }
    else if(c!=-1&&d!=-1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
 }