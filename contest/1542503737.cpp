#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)
#define ll long long
#define pii pair < int , int >
#define vi vector < int >
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define clr(x) memset(x, 0, sizeof(x))
#define init(x, a) memset(x, a, sizeof(x))
#define vll vector < long long int >
#define sll set < long long int >
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const ll mod = 1e9+9;
int main()
{
    fastIO;
    ll n,k,i,j,p,q,r,dp[100001][4],arr[16];
    fo(i,16)arr[i]=0;
    cin>>n>>k;
    fo(i,n)
    {
        p = 0;
        fo(j,k)
        {
            cin>>dp[i][j];
            if(dp[i][j]==1)
                p = p|(1<<j);
        }
        arr[p] = 1;
    }
    if(arr[0]==1){cout<<"YES";return(0);}
    fo(i,16)
    {
        fo(j,16)
        {
            if((i&j)==0 and arr[i]==1 and arr[j]==1)
            {
                cout<<"YES";return(0);
            }
        }
    }
    cout<<"NO";
}
