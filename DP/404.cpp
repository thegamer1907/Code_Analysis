#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define ff first
#define ss second
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int b[n],frb[102]={0};for(int i=0;i<n;i++){cin>>b[i];frb[b[i]]++;}
    int m,ans=0;
    cin>>m;
    int g[m],frg[102]={0};for(int i=0;i<m;i++){cin>>g[i];frg[g[i]]++;}
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=frb[i];j++)
        {
            if(frg[i-1]>0){ans++;frg[i-1]--;}
            else if(frg[i]>0){ans++;frg[i]--;}
            else if(frg[i+1]>0){ans++;frg[i+1]--;}
        }
    }
    cout<<ans;
}
