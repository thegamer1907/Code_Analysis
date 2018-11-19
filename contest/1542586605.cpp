#include<bits/stdc++.h>
using namespace std;
string ax,bx;
map<string,bool> ac;

int main()
{

    cin>>ax;
    int n;
    cin>>n;
    int cnt=0,flag=0,cnt1=0;
    for(int i=0;i<n;i++)
        {
            cin>>bx;
            if(bx[0]==ax[0]&&bx[1]==ax[1])
                flag=1;
            if(bx[1]==ax[0])
                cnt=1;
            if(ax[1]==bx[0])
                    cnt1=1;
        }
        if(cnt==1&&cnt1==1)
            flag=1;
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    return 0;
}
