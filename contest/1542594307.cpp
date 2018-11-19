#include <bits/stdc++.h>
using namespace std;
string a[105];
int main()
{
    string pass;
    cin>>pass;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    bool posi=false;
    for(int i=1;i<=n;i++)
        if(a[i]==pass)
            posi=true;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(a[i][1]==pass[0]&&a[j][0]==pass[1])
                posi=true;
        }
    if(posi)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
