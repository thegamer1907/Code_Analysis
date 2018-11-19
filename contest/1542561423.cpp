#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n,i,r=0,k=0,j,s1=0;
    cin>>n;
    char c[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
            {cin>>c[i][j];
            }
    }
    for(i=0;i<n;i++)
    {
        if(c[i][0]==s[1])
            r++;
        if(c[i][1]==s[0])
            k++;
        if(c[i][1]==s[1]&&c[i][0]==s[0])
            s1++;

    }
    if((r&&k)||s1)
        cout<<"YES";
    else
        cout<<"NO";






    return 0;
}
