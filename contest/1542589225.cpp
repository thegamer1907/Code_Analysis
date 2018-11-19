#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

string password;
string tryw;
int re[5], n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(cin>>password)
    {
        cin>>n;
        memset(re,0,sizeof(re));
        int flag=0;
        for(int i=1;i<=n;++i)
        {
            cin>>tryw;
            if(!flag)
            {
                if(tryw==password)  re[1]=1;
                if(tryw[0]==password[1])    re[3]=1;
                if(tryw[1]==password[0])    re[4]=1;
                if(re[1]||(re[3]&&re[4]))   flag=1;
            }
        }
        if(flag)     cout<<"YES"<<endl;
        else   cout<<"NO"<<endl;
    }
    return 0;
}

