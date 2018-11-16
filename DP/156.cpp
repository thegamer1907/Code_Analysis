#include<bits/stdc++.h>
using namespace std;
#define INF 1000000007
int main()
{
    int x,a[1000]={0},b[1000]={0};
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;a[x]++;
    }
    int m;cin>>m;
    for(int i=0;i<m;i++){
        cin>>x;b[x]++;
    }
    int ans=0;
    for(int i=1;i<=100;i++)
    {
        x=min(a[i],b[i-1]+b[i]+b[i+1]);
        ans+=x;
        for(int j=i-1;j<=(i+1) && x>0;j++){
            if(b[j]>x){
                b[j]-=x;
                x=0;
            }
            else{
                 x-=b[j];
                b[j]=0;
            }
        }
    }
    cout<<ans;
}