#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=1e5+7;
int main()
{
    ll n;
    int m,k;
    while(cin>>n>>m>>k)
    {


        ll a[100009];
        int ans=0,suo=0;
        ll jie=k;
        for(int i=0; i<m; i++)cin>>a[i];
        int i=0;
        while(1)
        {
            int kk=0;
            while((a[i]-suo)<=jie)
            {
                kk++;
                i++;
                if(i==m) break;
            }
            suo+=kk; 
            if(kk==0)jie+=k;
            if(kk!=0)ans++;
            if(i==m)break;

        }
        cout<<ans<<endl;
    }
    return 0;
}