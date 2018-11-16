#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string str;
    cin>>str;
    if(str.size()<7)
    {
        cout<<"NO\n";
        return 0;
    }
    bool f=0;
    for(int i=0;i<=(str.size()-7);i++)
    {
        if(str.substr(i,7)=="1111111" || str.substr(i,7)=="0000000")
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
