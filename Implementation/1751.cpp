#include<bits/stdc++.h>
using namespace std;
int main (){
    int n = 1;
    int maximo = 1;
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if (s[i]==s[i-1]){
            n = n+1;
        } else {
            n = 1;
        }
        maximo = max(maximo,n);
    }
    if (maximo>=7){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}
