#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int t;
cin>>t;
string s;
cin>>s;
while(t--){
    for(int i=0;i<s.length();i++){
        if(s[i]=='B' && i+1<s.length() && s[i+1]=='G'){
            s[i]='G';
            s[i+1]='B';
            i++;
        }
    }
}
cout<<s;
}
