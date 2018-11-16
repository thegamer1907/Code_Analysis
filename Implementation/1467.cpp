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
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.length();
    f(i,0,n-6)
    {
        if(s[i]==s[i+1]&&s[i+6]==s[i+5]&&s[i+5]==s[i+4]&&s[i+4]==s[i+3]&&s[i+3]==s[i+2]&&s[i+2]==s[i+1])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}