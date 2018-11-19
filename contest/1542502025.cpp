#include <bits/stdc++.h>

using namespace std;
const int oo=(int)1e7;


int main()
{
    //freopen("important.in","r",stdin);
    //freopen("output.txt","w",stdout);
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); // this make cin , cout fast like scanf , brintf
    ////////////////////////////////
    ////////////////////////////////
    ///////////////////////////////

    string s,ss;
    int n;

    cin>>s;
    cin>>n;
    bool f=false,e=false;
    for(int i=0;i<n;i++)
    {
        cin>>ss;
        if(ss[0]==s[1])
            f=true;
        if(ss[1]==s[0])
            e=true;

        if(ss==s)
        {
            f=true;
            e=true;
        }
    }
    if(f==true&&e==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
