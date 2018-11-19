#include <bits/stdc++.h>
#define ll long long int
#define p pair<ll,ll>
#define fi first
#define se second
#define pp pair<pair<ll,ll>,ll>
#define opti ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
ll t,i,j,n,m;
int main() 
{
    opti
    string ans;
    cin>>ans;
    cin>>n;
    vector <string> v;
    bool f=0;
    string temp="";
    ll ind = -1;
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
        if(s==ans)
        {
            f = 1;
        }
        if(s[1] == ans[0])
        {
            ind = i;
        }
    }
    if(f)
    {
        cout<<"YES";
    }
    else if(ind==-1)
    {
        cout<<"NO";
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(v[i][0] == ans[1])
            {
                f=1;
            }
        }
        if(f)
        cout<<"YES";
        else
        cout<<"NO";
    }
	return 0;
}
