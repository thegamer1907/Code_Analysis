#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len,i;
    char s[100010];
    while(cin>>s)
    {
        int f1=0, f2=0;
        len=strlen(s);
        for(i=0; i<len-1; i++)
        {
            if(s[i]=='A' && s[i+1]=='B' && f1==0)
            {
                f1=1;
                i++;
                continue;
            }
            if(s[i]=='B' && s[i+1]=='A' && f1==1)
            {
                f2=1;
                i++;
            }
        }
        if(f1==1 && f2==1){ cout<<"YES"<<endl; continue;
        }
        f1=0; f2=0;
        for(i=0; i<len-1; i++)
        {
            if(s[i]=='B' && s[i+1]=='A' && f2==0)
            {
                f2=1;
                i++;
                continue;
            }
            if(s[i]=='A' && s[i+1]=='B' && f2==1)
            {
                f1=1;
                i++;
            }
        }
        if(f1==1 && f2==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
