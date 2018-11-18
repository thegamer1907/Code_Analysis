#include<bits/stdc++.h>
using namespace std;
#define sp ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define ll  long long
#define cps CLOCKS_PER_SEC
#define f first
#define s second
#define debug1(x) cout<<x<<"\n"
#define debug2(x,y) cout<<x<<" "<<y<<"\n"
#define debug3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
#define nl cout<<"\n";
#define pq priority_queue
#define inf 0x3f3f3f3f
#define test cout<<"abcd\n";
#define pi pair<ll,ll>
#define pii pair<int,pi>
#define pb push_back
#define mxn 200005
#define mp make_pair
vector <int> sset[10005];
int main()
{
    string s1;
    cin>>s1;
    int n;
    cin>>n;
    vector <string> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {

        if(v[i]==s1)
        {
            cout<<"YES\n";
            return 0;
        }
        //else if()
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s1[0]==v[i][1] && s1[1]==v[j][0])
            {
                cout<<"YES\n";
                return 0;
            }
            else if(s1[0]==v[j][1] && s1[1]==v[i][0])
            {
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
}
