#include <iostream>
using namespace std;
int main(){
    string s,t;
    
    int n;
    cin>>s>>n;
    bool b1=false,b2=false,b=false;
    for(int i=0;i<n;i++){
        cin>>t;
        if(s[0]==t[0]&&s[1]==t[1]){
            b=true;
            break;
        }if(s[0]==t[1]){
            if(b2){
                b=true;
                break;
            }b1=true;
            if(s[1]==t[0]){
                b=true;
                break;
            }
        }else if(s[1]==t[0]){
            if(b1){
                b=true;
                break;
            }b2=true;
        }
    }if(b)
        cout<<"YES";
    else cout<<"NO";
}