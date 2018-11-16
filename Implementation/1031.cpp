#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,m,temp=0;
    cin>>n>>m;
    char s[1000];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int j=1;j<=m;j++){
     for(int i=0;i<n;i++){
        if((s[i]=='B')&&(s[i+1]=='G')){
            temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
            i++;
        }
    }
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    return 0;

}
