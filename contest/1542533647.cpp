#include<bits/stdc++.h>

using namespace std;
int main()
{
    string x,str;
    cin>>x;
    int n,first=0,second=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>str;
        if(str==x)
        {
            cout<<"YES"<<endl;
            goto end;
        }
        else if(x[0]==str[1] && x[1]==str[0])
        {
            cout<<"YES"<<endl;
            goto end;
        }
        else
        {
            if(x[0]==str[1])
            {
                first++;
            }
            if(x[1]==str[0])
            {
                second++;
            }
        }
    }
    if(first>0 && second>0)
    {
        cout<<"YES"<<endl;
        goto end;
    }
    cout<<"NO"<<endl;
    end:

    return 0;
}
