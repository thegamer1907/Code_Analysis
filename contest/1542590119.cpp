#include <bits/stdc++.h>

using namespace std;




int main()
{
    string pass;
    int n;
    cin>>pass>>n;
    string str[n];
    bool ss=false;
    for(int i=0;i<n;i++){
        cin>>str[i];
        if(str[i]==pass)
            ss=true;
    }
    if(ss)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {

        if(str[i][1]==pass[0])
        {
            for(int j=0;j<n;j++)
            {
                if(str[j][0]==pass[1])
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
