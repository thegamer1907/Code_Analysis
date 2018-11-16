#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int i,c=0,d=0,flag=0;
    for(i=0;i<l;i++)
    {
        if(s[i]=='0')
        {
        c++;
        
        }
        
        else
        {
            
            if(c>=7)
            {
                flag=1;
                break;
            }
            c=0;
        }
        if(s[i]=='1')
        {
        d++;
        
        }
        
        else
        {
            
            if(d>=7)
            {
                flag=1;
                break;
            }
            d=0;
        }
        
    }
    if(c>=7 || d>=7)
    flag=1;
    if(flag==1)
    cout<<"YES";
    else
    cout<<"NO";
}