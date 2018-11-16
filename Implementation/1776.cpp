#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n=s.length();
    int zero=0,one=0;
    (s[0]=='1')?one=1:zero=1;
    for(int i=1;i<n;i++){
        if(s[i]=='0' && s[i-1]=='0'){
            zero++;
        }
        else if(s[i]=='0' && s[i-1]=='1'){
            if(one>6){
                cout<<"YES";
                return 0;
            }
            one=0;
            zero=1;
        }
        else if(s[i]=='1' && s[i-1]=='1'){
            one++;
        }
        else if(s[i]=='1' && s[i-1]=='0'){
            if(zero>6){
                cout<<"YES";
                return 0;
            }
            one=1;
            zero=0;
        }
    }
    if(zero>6 || one>6){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
