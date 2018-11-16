#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int k=1;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1])k++;
        else k=1;
        if(k>=7)break;
    }
    if(k==7)cout<<"YES";
    else cout<<"NO";
}
