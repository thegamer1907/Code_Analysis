#include <bits/stdc++.h>
//#include <iostream>
//#include <cstdio>
//#include <algorithm>

using namespace std;

int main()
{
    string pass,temp;
    char s,e;
    bool flag1 = false,flag2 = false;
    int n;
    cin>>pass;
    s = pass[0];
    e = pass[1];
    cin>>n;
    while(n--){
        cin>>temp;
        if(temp==pass){
            cout<<"YES"<<endl;
            return 0;
        }
        if(temp[1]==s) flag1=true;
        if(temp[0]==e) flag2=true;
    }
    if(flag1&&flag2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
