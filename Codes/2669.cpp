#include <bits/stdc++.h>
using namespace std;
string s;
int p[1010101];
void pref_f(){
    int j = 0;
    for(int i=1;i<s.length();i++){
        while(j>0 && s[j]!=s[i])
            j=p[j-1];
        if(s[j]==s[i])j++;
        p[i]=j;
    }
}
int main(){
    cin>>s;
    pref_f();
    if(p[s.length() -1] == 0)return cout<<"Just a legend\n", 0;
    for(int i=1;i<s.length()-1;i++)
        if(p[i] == p[s.length() -1])
            return cout<<s.substr(0, p[s.length() -1])<<endl,0;
    if(p[p[s.length() -1]-1] == 0)return cout<<"Just a legend\n", 0;
    return cout<<s.substr(0, p[p[s.length() -1]-1])<<endl,0;
}
