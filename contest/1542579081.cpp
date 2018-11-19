#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
#ifndef ONLINE_JUDGE
 //   freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);
#endif
    string s,a,p;
    int n,m;
    bool flag=false,raf=false;
    vector<string>str;
    cin>>s;
    cin>>n;
    m=n;
    while(m--)
    {
        cin>>a;
        str.push_back(a);
        if(a==s)
        {
            flag=true;
        }
    }
    if( flag==true)
        cout<<"YES"<<endl;
    if(flag==false)
    {
        for(int i=0; i<n; i++)
        {
            p=str[i]+str[i];
            if(s==p.substr(1,2))
            {
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
        }
    }

    if(flag==false)
    {
        for(ll i=0; i<n; i++)
            if(str[i][0]==s[1])
            {
                raf=true;
                break;
            }
        if(raf==true)
            for(ll i=0; i<n; i++)
                if(str[i][1]==s[0])
                {
                    cout<<"YES"<<endl;
                    flag=true;
                    break;
                }

    }
    if(flag==false)
        cout<<"NO"<<endl;
    return 0;
}
