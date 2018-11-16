#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,c=0;
    cin>>n>>t;
    string s;
    cin>>s;
    char temp;

    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                c++;
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                j++;
            }
        }
        
        if(c==0){break;}
        c=0;
    }
    cout<<s;
}