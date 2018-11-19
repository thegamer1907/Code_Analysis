#include<bits/stdc++.h>
using namespace std;
int n,k;
int num[50],vis[50];
int main()
{
    memset(num,0,sizeof(num));
    memset(vis,0,sizeof(vis));
    //cout<<(1&2)<<endl;
    cin>>n>>k;
    int cnt=0,flag=false;
    for(int i=0;i<n;i++){
        int x=0,a=0;
        for(int j=0;j<k;j++){
            cin>>a;
            x+=a*(int)pow(2,j);
        }
        //cout<<x<<endl;
        if(vis[x]) continue;
        num[cnt++]=x;vis[x]=1;
    }
    for(int i=0;i<cnt;i++){
        for(int j=i+1;j<cnt;j++){
            if((num[i]&num[j])==0){
                flag=true;
                break;
            }
        }
    }
    if(cnt==1&&num[0]==0) flag=true;
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
