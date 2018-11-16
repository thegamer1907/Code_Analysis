#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,p=0;
    while(cin>>n>>t)
    {
        string s;
        cin>>s;

        for(int j=1; j<=t; j++)
        {
            for(int i=1; i<n; i++)
            {
                if(s[i]=='G' && s[i-1]=='B')
                {
                    s[i]='B';
                    s[i-1]='G';
                    i++;
                }
            }
        }

        cout<<s<<endl;
    }


}
