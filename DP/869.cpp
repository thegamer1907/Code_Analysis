#include<bits/stdc++.h>
using namespace std;
#define INF 1000000007
int main()
{
    int n;cin>>n;
    int a[1000];
    for(int i=1;i<=n;i++)cin>>a[i];
    int ans[1000]={0},val=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1){ ans[i]=ans[i-1];val+=1;}
        else ans[i]=ans[i-1]+1;
    }
    int x=0,y=1,ml=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(((j-i+1)-(ans[j]-ans[i-1]))<(ans[j]-ans[i-1]) && ml<(2*(ans[j]-ans[i-1])-(j-i+1))){
                x=i;y=j;ml=(2*(ans[j]-ans[i-1])-(j-i+1));
            }
            else if((2*(ans[j]-ans[i-1])-(j-i+1))==ml && ((j-i+1)-(ans[j]-ans[i-1]))<(ans[j]-ans[i-1])){
                if((j-i)<(y-x))x=i,y=j;
            }
        }
    }
    if(ml==0)cout<<val-1;
    else{
        int z=0;
        for(int i=1;i<=n;i++){
            if(i>=x && i<=y)
                a[i]=1-a[i];
            if(a[i]==1)z++;
        }
        cout<<z;
    }
}