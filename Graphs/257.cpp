#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,k,t,ii,m=0;
    string s;
    cin>>k>>t>>s;    
    for(ii=1;ii<=t;ii++)  
        for(i=0;i<s.length()-1;i++) if(s[i]=='B' && s[i+1]=='G') {swap(s[i],s[i+1]);i++;}
    cout<<s<<"\n";                         
    return 0;}    
    