#include<bits/stdc++.h>
#include<cstring>
using namespace std;
main()
{
    string s;
    while(cin>>s)
    {
        long n,i,f=0,f1=0,f2=0;
        string s1;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>s1;
            if(s[0]==s1[1])
            {
                f=1;
            }
            if(s[1]==s1[0])
            {
                f1=1;
            }
            if(((s[0]==s1[1])&&(s1[0]==s[1]))||(s[0]==s1[0])&&(s1[1]==s[1]))
                f2=1;
        }
        if((f==1&&f1==1)||(f2==1))
            printf("YES\n");
        else
            printf("NO\n");
    }
}
