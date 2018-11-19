#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define pb push_back
#define X first
#define Y second
typedef long long ll;
typedef pair<int,int> p;
#define vi vector<int>
#define mem(x,y) memset(x,y,sizeof(x))
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    int t,i,j;
    string s;
    cin>>s;
    char a=s[0];
    char b=s[1];
    int n;
    cin>>n;
    string arr[n];
    vi veca,vecb;
    bool foo=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i][0]==b)
            vecb.pb(i);
        if(arr[i][1]==a)
            veca.pb(i);
        if(arr[i]==s)
            foo=1;
    }
    if(foo)
    {
        cout<<"YES";
    }
    else
    {
        if(veca.empty() || vecb.empty())
            cout<<"NO";
        else
        {
            cout<<"YES";
        }
    }
}
