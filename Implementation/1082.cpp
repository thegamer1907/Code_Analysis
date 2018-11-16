#include<iostream>
#include<string>
//#include<bits/stdc++.h>
using namespace std;
main()
{
    //freopen("266B.inp","r",stdin);
    //freopen("266B.out","w",stdout);
    string s;
    long n,a[1500],i,j,x,y=1;
    cin>>n>>x;
    cin>>s;
    while(y<=x){y++;
    for(i=0;i<n;i++){
        if(s[i]=='B'){
        if(s[i+1]=='G'){
        char c=s[i];s[i]=s[i+1];s[i+1]=c;
        i++;
        }
    }}}
    cout<<s;
}
