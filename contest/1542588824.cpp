#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int n, i,j;
    char s[5], tem[105][2];
    cin>>s;
    cin>>n;


    for(i = 0; i < n; i++)
    {
        cin>>tem[i];
        if(!strcmp(s, tem[i]))
        {
            cout<< "yes";
            return 0;
        }
    }
    int x = 0, y = 0;
    for(i = 0; i < n; i++)
    {
        if(tem[i][1] == s[0]) x = 1;
        if(tem[i][0] == s[1]) y = 1;
    }
    if(x && y) cout<<"yes";
    else cout<< "no";

    return 0;
}
