#include <iostream>

using namespace std;
#include <bits/stdc++.h>
int main(){
string s;
int n,t;
cin>> n>> t>>s;
int u=0;
for(int y=0;y<t;y++){
for(int i=0;i<n;i++){
    if(s[i]=='G'){;continue;}
    else if(s[i+1]=='G'){
        swap(s[i],s[i+1]);
        i+=1;
    }
    
}}
cout<<s;
}

