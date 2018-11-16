
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    
    for(long int i=0; i<t; i++)
    {
        for(long int j=0; j<s.length()-1; j++)
        {
            if( (s[j]=='B') && (s[j+1]=='G') )
            {
                s[j]=s[j+1];
                s[j+1]='B';
                j++;
                
            }
            
            
        }
     }
    
    cout<<s<<endl;
    
}