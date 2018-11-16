#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;
    int a=0,b=0;
    for(string::iterator it = s.begin(); it != s.end(); ++it){
        if(*it == '1'){
            a++;
            b=0;
        }else{
            b++;
            a=0;
        }
        if(a==7 || b==7){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;


}
