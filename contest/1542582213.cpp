#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
#define in insert
#define x first
#define y second
#define inf INT_MAX
int main()
{

    ios::sync_with_stdio(false);
    string a;
    cin>>a;
    int n;
    cin>>n;
    int i;
    map<char,int>f;
    map<char,int>se;
    string s;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s==a)
        {
            cout<<"yes";
            return 0;
        }
        f[s[0]]=1;
        se[s[1]]=1;
    }
if(f[a[1]]==1&&se[a[0]]==1)
{
    cout<<"YES";
}
else
    cout<<"NO";


    return 0;
}


