#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define fr(i,a,b) for(ll int i=a;i<b;i++)
#define vsort(v) sort(v.begin(),v.end())
#define whl(t) while(t--)
#define vuni(vec) vec.erase( unique( vec.begin(), vec.end() ), vec.end() )
#define mod 1000000007

using namespace std;
//akashravi.tk


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll int t,ct,n,r,f;
	vector<string> a;
	string s,k;
	cin>>s;
    cin>>t;
    whl(t)
    {
	cin>>k;
	a.pb(k);

    }
    fr(i,0,a.size())
    {
        if(a[i][0]==s[0])
        {
            //fr(j,0,a.size())
            {
                if(a[i][1]==s[1])
                {
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    fr(i,0,a.size())
    {
        if(a[i][1]==s[0])
        {
            fr(j,0,a.size())
            {
                if(a[j][0]==s[1])
                {
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    //cout<<"\n";
    cout<<"NO";
    return 0;
}
