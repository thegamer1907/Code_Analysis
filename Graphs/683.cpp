#include<bits/stdc++.h>
using namespace std;
int queue(string s)
{
    
}
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int j=1;j<=t;j++)
    {
        
    for(int i=0;i<s.size();)
    {
        if(s[i]=='B' and s[i+1]=='G')
        {
            s[i]='G';
            s[i+1]='B';
            i=i+2;
        }
        else i++;
    }
     
    }
    cout<<s;
   
       
}