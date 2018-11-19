#include<bits/stdc++.h>
#include <stdlib.h>
typedef long long int ull;
typedef long long int ll;
#define ub upper_bound
#define lb lower_bound
#define pb push_back
#define intmax 100000000007
#define m_p make_pair
#define int_char_index(a) a-'0'
#define neginf -1000000001
#define MAXN 100000000001
#define mod 1000000007
#define F first
#define S second
#define fr(j,x,y) for(j=x;j<=y;j++)


using namespace std;
vector<ll> adj[100001];
map<pair<ll,ll>,ll> mcost;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie();cout.tie();

    string s,s1;
    cin>>s;
    int l=0,r=0,n,i,ans=0;

    cin>>n;
    fr(i,1,n)
    {
        cin>>s1;
        if(s1[0]==s[0]&&s1[1]==s[1])
        {
            ans=1;
        }
        if(s1[0]==s[1]&&s1[1]==s[0])
        {
            ans=1;

        }
        else if(s1[0]==s[1])
        {
            if(r==1)
            {
                ans=1;
            }
            else
            {
                l=1;
            }
        }
        else if(s1[1]==s[0])
        {
            if(l==1)
            {
                ans=1;
            }
            else
            {
                r=1;
            }
        }



    }
    if(ans==1)
        cout<<"YES";
    else
        cout<<"NO";

}
