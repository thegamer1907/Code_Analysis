#include<bits/stdc++.h>
using namespace std;
char p[105][105];
int main()
{
    string s;
    int n;
    cin>>s>>n;
    for(int i=1;i<=n;i++)
        cin>>p[i][0]>>p[i][1];
        bool fst_0=false,fst_1=false,lst_0=false,lst_1=false;
    for(int i=1;i<=n;i++)
    {
        if(s[0]==p[i][0])
            fst_0=true;
        if(s[0]==p[i][1])
            fst_1=true;
        if(s[1]==p[i][0])
            lst_0=true;

        if(s[1]==p[i][1])
            lst_1=true;
        if(s[0]==p[i][0]&&s[1]==p[i][1])
            fst_1=1,lst_0=1;
    }
    if(fst_1&&lst_0) cout<<"YES";
    else
    {

        cout<<"NO";
    }

}
