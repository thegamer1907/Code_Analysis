#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ha,en;
    ha=getchar();
    en=getchar();
    int n;
    cin>>n;
    bool fgha=0;
    bool fgen=0;
    for(int i=0;i<n;i++)
    {
        string in;
        cin>>in;
        if(in[0]==ha&&in[1]==en)
        {
            fgha=true;
            fgen=true;
        }
        if(in[0]==en)fgen=true;
        if(in[1]==ha)fgha=true;
    }
    if(fgen&&fgha)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}