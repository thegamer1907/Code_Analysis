#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int,int> pp;

bool tag[444];

int main()
{
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    tag[h*5%60]=true;
    tag[m]=true;
    tag[s]=true;
    t1=t1*5%60;
    t2=t2*5%60;
    bool win=true;
    for(int i=t1 ; i%60!=t2 ; i++)
    {
        if(tag[i%60])
        {
            win=false;
            break;
        }
    }
    if(win)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        win=true;
        for(int i=t2 ; i%60!=t1 ; i++)
        {
            if(tag[i%60])
            {
                win=false;
                break;
            }
        }
        if(win)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
