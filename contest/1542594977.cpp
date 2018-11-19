#include<bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define sqr(a) ((a)*(a))
#define y1 y1231231
#define endl '\n'
#define ll long long
#define int ll

using namespace std;

const int N=300001;
const int inf=1e9+3;
const int md=1e9+7;
const long double eps=0.0000000000001;

int n,m,k;
string a[101];
main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
        {
            string t=a[i]+a[j];
            for(int j=0;j<t.size()-1;++j)
            {
                if(s[0]==t[j]&&s[1]==t[j+1])
                {
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
}
