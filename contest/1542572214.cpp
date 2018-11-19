#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s,x;
    int cases;
    bool p1,p2;
    p1=p2=false;
    cin>>s>>cases;
    while(cases--)
    {
        cin>>x;
        if (x[0]==s[1])
            p1=true;
        if (x[1]==s[0])
            p2=true;
        if (x==s)
            return puts("YES"),0;
    }

    puts(p1&&p2? "YES":"NO");

    return 0;
}

