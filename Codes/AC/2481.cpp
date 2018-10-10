#include <bits/stdc++.h>
using namespace std;
#define PI 2.0*acos(0.0)
#define ull unsigned long long
#define lim 10000007
int ara[10000007];
bool vis[10000007];
int ct[10000007];
int csum[lim];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ara[a]++;
    }
    for(int i=2;i<lim;i++){
        if(vis[i]==false){
            ct[i]+=ara[i];
            for(int j=i+i;j<=lim;j+=i){
                vis[j]=true;
                ct[i]+=ara[j];
            }

        }
    }
    for(int i=2;i<lim;i++) csum[i]=csum[i-1]+ct[i];
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a=min(a,lim-7);
        b=min(b,lim-7);
        cout<<csum[b]-csum[a-1]<<"\n";
    }
}
