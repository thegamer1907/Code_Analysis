#include<bits/stdc++.h>
using namespace std;
#define pri pair<int,int>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define lp(i,u) for(int i=0;i<u;i++)
#define Lp(i) for(int i=0;i<n;i++)
#define ll long long
#define inf 1000000000000000001
#define eps 0.00000000001
#define scni(a) scanf("%d",&a)
#define scnl(a) scanf("%I64d",&a)
#define pri(a) printf("%d ",a)
#define prl(a) printf("%I64d ",a)
#define setval(a,p) memset(a,-1,sizeof(a))
#define ld long double
#define OO 1000005500
#define M 500100
#define N 200100
#define mod 1000000007

string s;
int n,m,k,h,e,l,l2,o;

int main()
{
    //ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>s;
    n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='9' || s[i]=='H' || s[i]=='Q')
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";


    return 0;
}
