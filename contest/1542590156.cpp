#include<bits/stdc++.h>
using namespace std;

string s[110];

int main()
{
    int n,i,j;
    string t;
    cin>>t>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int f = 0;
    for(i=0;i<n;i++)
    {
        if(s[i] == t)
        {
            f = 1;
            goto A;
        }
        else if(s[i][1] == t[0])
        {
            for(j=0;j<n;j++)
            {
                if(s[j][0] == t[1])
                {
                    f = 1;
                    goto A;
                }
            }
        }
    }
    A:;
    if(f)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return(0);
}
