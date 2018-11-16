#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define x first
#define y second
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const int maxn=505;
ll h[maxn][maxn],s[maxn][maxn];
char ip[maxn][maxn];

int main()
{
    fastread;
    for(int i=0;i<maxn;i++){
        ip[0][i]='#';
        ip[i][0]='#';
    }
    int H,W,Q;
    cin>>H>>W;
    for(int i=1;i<=H;i++)
        for(int j=1;j<=W;j++)
            cin>>ip[i][j];
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            if(ip[i][j]==ip[i-1][j] && ip[i][j]=='.')
                h[i][j]=1;
            if(ip[i][j]==ip[i][j-1] && ip[i][j]=='.')
                s[i][j]=1;
            h[i][j]=h[i][j]+h[i-1][j]+h[i][j-1]-h[i-1][j-1];
            s[i][j]=s[i][j]+s[i-1][j]+s[i][j-1]-s[i-1][j-1];
        }
    }
    cin>>Q;
    while(Q--){
        pair<int,int> arr[2];
        for(int i=0;i<2;i++)
            cin>>arr[i].x>>arr[i].y;
        ll ans=h[arr[1].x][arr[1].y]+h[arr[0].x-1][arr[0].y-1]-h[arr[1].x][arr[0].y-1]-h[arr[0].x-1][arr[1].y];
        ans=ans+s[arr[1].x][arr[1].y]+s[arr[0].x-1][arr[0].y-1]-s[arr[1].x][arr[0].y-1]-s[arr[0].x-1][arr[1].y];
        for(int i=arr[0].x;i<=arr[1].x;i++)
            if(ip[i][arr[0].y]==ip[i][arr[0].y-1] && ip[i][arr[0].y]=='.')
                ans--;
        for(int i=arr[0].y;i<=arr[1].y;i++)
            if(ip[arr[0].x][i]==ip[arr[0].x-1][i] && ip[arr[0].x][i]=='.')
               ans--;
        cout<<ans<<'\n';    
    }
    return 0;
}