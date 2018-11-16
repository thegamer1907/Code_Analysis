#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c=0;
    string s;
    cin>>s;

    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && c==0)
        {
            i++;
            c=1;
        }
        else if(s[i]=='B' && s[i+1]=='A' && c==1)
        {
            i++;
            c=2;
        }
    }
    if(c==2)
        cout<< "YES" <<endl;
    else
    {
        c=0;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]=='B' && s[i+1]=='A' && c==0)
            {
                i++;
                c=1;
            }
            else if(s[i]=='A' && s[i+1]=='B' && c==1)
            {
                i++;
                c=2;
            }
        }
        if(c==2)
            cout<< "YES" <<endl;
        else
            cout<< "NO" <<endl;
    }

    return 0;
}
