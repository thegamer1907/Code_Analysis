#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool flag=0;
    for(int i=0;i<s.length();i++)
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')flag=1;
    if(flag)cout<<"YES";
    else cout<<"NO";
    return 0;
}