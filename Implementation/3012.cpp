#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
#define MP make_pair
#define PB push_back
#define ll long long
#define int long long
#define f(i,x,n) for(int i=x;i<n;i++)
#define mod 1000000007
string s[1001];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int flag=0;
    f(i,0,n)
    {
        cin>>s[i];
        if(flag==0)
        {
            if(s[i][0]=='O'&&s[i][1]=='O')
            {
                s[i][0]='+',s[i][1]='+';
                flag=1;
            }
            if(flag==0)
            {

                    if(s[i][3]=='O'&&s[i][4]=='O')
                    {
                        s[i][3]='+',s[i][4]='+';
                        flag=1;
                    }
            }
        }
    }
    if(flag==0)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        f(i,0,n)
        {
            cout<<s[i]<<endl;
        }
    }
    return 0;
}