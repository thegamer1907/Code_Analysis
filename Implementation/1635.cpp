#include<bits/stdc++.h>
using namespace std;

int main(){
int count0=0,count1=0;
string s;
cin>>s;
for(int i=0;i<s.length();i++){
    if(s[i]=='0'){count0++;count1=0;}
    else{count1++;count0=0;}
    if(count0>6||count1>6){cout<<"YES";return 0;}}
    cout<<"NO";
}

