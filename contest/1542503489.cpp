#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,flag=0,flag1=0,flag2=0;
    string s,s1,s2="";
    cin>>s;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>s1;
        s2+=s1[1];
        s2+=s1[0];
        if(s==s1 || s==s2)flag=1;
        else{
            if(s1[0]==s[1])flag1=1;
            if(s1[1]==s[0])flag2=1;
        }
        s2.clear();
    }
    if(flag1 && flag2)flag=1;
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}