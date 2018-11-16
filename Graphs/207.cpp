#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";
#define br cout<<endl;
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define mem(a,b) memset(a,b,sizeof(a))
#define fi first
#define se second

typedef long long ll;
typedef pair<int, int> pii;
const int MAX = 100005;
const int INF = 1e9+7;
const ll LINF = 1e18 + 7;
int n,k,f;
int ar[25];
/***************************************************************************/
int solve(int ind, int r)
{
    //cout<<ind<<" "<<r<<endl;
    if(ind>=n)
    {
        return 0;
    }
    if(r==0)
    {
        f=1;
        return 0;
    }
    for(int i=ind+1;i<n;i++)
    {
        solve(i, r-ar[i]);
    }

}
int main()
{
    ios::sync_with_stdio(0);
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        while(k--)
        {
            for(int i=0;i<n-1;i++)
            {
                if(s[i]=='B' && s[i+1]=='G')
                {
                    s[i]='G';
                    s[i+1]='B';
                    i++;
                }
            }
           // cout<<s<<endl;
        }
        cout<<s<<endl;
    return 0;
}
