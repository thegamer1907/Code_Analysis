#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
    string s; cin>>s; 
    string ans = "NO";
    int count1=0,count2=0,dump1=0,dump2=0; 
    for(int i=0;i<s.size()-1;i++){ 
        if(s[i]=='A'&&s[i+1]=='B'){ 
            count1++; i++; 
            if(i+1<s.size()&&s[i+1]=='A') {dump1++; i++;}
        }else if(s[i]=='B'&&s[i+1]=='A'){ 
            count2++; i++; 
            if(i+1<s.size()&&s[i+1]=='B') {dump2++; i++;}
        }
    } 
    if(count1&&count2) ans = "YES"; 
    else if(count1>1&&dump1) ans = "YES"; 
    else if(count2>1&&dump2) ans = "YES"; 
    cout<<ans;
    return 0;
}