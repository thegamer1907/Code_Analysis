#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    bool fl=false, sl=false;
    string s;
    cin>>s;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        string w;
        cin>>w;
        if(w[0]==s[1])
        sl=true;
        if(w[1]==s[0])
        fl=true;
        if(w[1]==s[1]&&w[0]==s[0])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    if(fl==true&&sl==true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}
