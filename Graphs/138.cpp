#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j,n,t;
    std::string s;
    cin>>n>>t;
    cin>>s;
    for (j = 0; j < t; j++)
    for (i = 0;i<(n-1);i++)
    {
        if((s[i]=='B')&&(s[i+1]=='G'))
        {
            s[i]='G';
            s[i+1]='B';
            i++;
        }
    }
    cout<<s<<endl;
    return 0;
}
