#include<bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define C 0.5772156649
#define pi acos(-1.0)
#define ll long long
#define mod 2147493647
#define ls l,m,rt<<1
#define rs m+1,r,rt<<1|1

using namespace std;

const double g=10.0,eps=1e-7;
const int N=100000+10,maxn=60000+10,inf=0x3f3f3f3f;

int a[N][5];
bool vis[100];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        int p=0;
        for(int j=0;j<k;j++)p+=(1<<j)*a[i][j];
        vis[p]=1;
    }
    for(int i=0;i<n;i++)
    {
        int p=0;
        for(int j=0;j<k;j++)p+=(1<<j)*a[i][j];
        for(int j=0;j<=(1<<k);j++)
        {
            if((p&j)==0&&vis[j])
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
/********************

********************/
