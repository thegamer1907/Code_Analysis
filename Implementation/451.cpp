#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define RPG(i,a,b) for(int i=(a);i<(b);i++)
#define maxn
int a[10000];
int cnt;
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    RPG(i,1,n+1){
        scanf("%d",&a[i]);
    }
    cnt=k;
    RPG(i,k+1,n+1){
        if(a[i]>=a[k])
            cnt++;
    }
    if(a[k]==0){
            int ans=0;
        RPG(i,1,n+1){
        if(a[i]>0)
            ans++;
        }
    cout<<ans<<endl;
    }
    else{
    cout<<cnt<<endl;
    }
    return 0;
}
