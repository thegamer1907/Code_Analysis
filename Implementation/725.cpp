#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string s;
    cin>>n>>t>>s;
    while(t--)
    {
        for(size_t i=0;i<s.length()-1;i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }

    }
     cout<<s<<endl;
     return 0;

}
