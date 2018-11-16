#include<iostream>
using namespace std;

int main(){
    string s,ans="NO";
    cin>>s;
    int x0=0,x1=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            x0++;
            x1=0;
        }
        else{
            x1++;
            x0=0;
        }
        if(x0==7 || x1==7)
            ans="YES";
    }
    cout<<ans<<endl;
}
