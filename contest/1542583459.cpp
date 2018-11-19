#include<bits/stdc++.h>
using namespace std;
main()
{
    string p;
    while(cin>>p)
    {
        long long i,j,cnt=0,flag=0,temp=0,n;
        string s;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>s;
            if((s[0]==p[0] && s[1]==p[1]) || (s[0]==p[1] && s[1]==p[0]))
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else if(flag==0 && s[0]==p[1])
            {
                    flag=1;
                    cnt++;
            }
            else if(temp==0 && s[1]==p[0])
            {
                temp=1;
                cnt++;
            }
        }
        if(cnt==2)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
