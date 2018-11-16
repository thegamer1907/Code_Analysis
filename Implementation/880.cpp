#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(string &str,int i)
{
    char t=str[i];
    str[i]=str[i+1];
    str[i+1]=t;
}
int main()
{
    ios::sync_with_stdio(false);
    int n,t;
    string str;
    cin>>n>>t;
    cin>>ws;
    getline(cin,str);
    while(t--)
    {
        for(int i=0;i<str.length()-1;i=i+2)
        {
            if(str[i]=='B' && str[i+1]=='G'){
            swap(str,i);
            }
            else
            i--;
        }
    }
    cout<<str;
    
    
}