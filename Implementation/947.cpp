#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string str;
    cin>>str;
    bool f=0;
    while(t--)
    {
            for(int i=0;i<n-1;i++)
                {
                    if(str[i]=='B'&&str[i+1]=='G')
                    {
                        str[i]='G';
                        str[i+1]='B';
                        i++;
                    }
                }
                if(t==0)
                break;
    }
    cout<<str<<endl;
   
}