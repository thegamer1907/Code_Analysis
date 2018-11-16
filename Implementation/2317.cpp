#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,res=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1])res++;
    }
    cout<<res<<endl;
    return 0;
}
