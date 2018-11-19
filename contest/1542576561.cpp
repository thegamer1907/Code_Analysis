#include<iostream>
#include<string>
#include<map>
#include<cstdio>
using namespace std;
int main()
{
    string st,s[11111];
    int n,i,j;
    while(cin>>st>>n)
    {

        map<char,int> q;
        q.clear();
        q[st[0]]=1;
        int f=0;
        for(i=0; i<n; i++)
        {

            cin>>s[i];
            if(s[i]==st)
                f=1;
        }
        if(f)
        {
            puts("YES");
            continue;
        }
        int f1=0,f2=0;
        for(i=0; i<n; i++)
        {
            // cout<<s[i][1]<<endl;
            if(q[s[i][1]])
            {
                f1=1;
                break;
            }
        }
        if(f1)
        {
            q.clear();
            q[st[1]]=1;
            for(i=0; i<n; i++)
            {
                //cout<<s[i][0]<<endl;
                if(q[s[i][0]])
                {
                    f2=1;
                    break;
                }
            }
            if(f2)
                puts("YES");
            else puts("NO");
        }
        else puts("NO");
    }
    return 0;
}
