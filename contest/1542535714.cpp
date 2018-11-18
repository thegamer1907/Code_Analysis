#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,st;
    cin>>str;
    vector<bool> v(26),b(26);
    int n;cin>>n;
    for(int i = 0 ; i < n ; i ++){
        cin>>st;
        if(st==str){
            cout<<"YES";
            return 0;
        }
        v[st[1]-'a']=true;
        b[st[0]-'a']=true;
    }
    if(v[str[0]-'a']&&b[str[1]-'a'])cout<<"YES";
    else cout<<"NO";
}
