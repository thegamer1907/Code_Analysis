#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    
    while(t--)
    {
        for(i=0;i<s.size()-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    
    cout<<s<<endl;
}