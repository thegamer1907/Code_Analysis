#include<iostream>
using namespace std;

string change(string s){
    string c="";
    s+="B";
    for(int i=0; i<s.size()-1; i++){
        if(s[i]=='B' && s[i+1]=='G'){
            c+="GB";
            i++;
        }
        else
            c+=s[i];
    }
    return c;
}
int main(){
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for(int i=0; i<t; i++){
        s=change(s);
    }
    cout<<s<<endl;
}
