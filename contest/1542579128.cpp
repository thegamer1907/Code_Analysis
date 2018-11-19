#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define sz(x) (int)x.size()
using namespace std;
int vis[3000] ;
vector<int> vec;
void dfs(int now,int pos[],int wei,int num){
    if(now == wei){
        vec.pb(num) ;
        return ;
    }
    if(pos[now] == 0){
        dfs(now+1,pos,wei,pow(2,now)+num) ;
        dfs(now+1,pos,wei,num) ;
    }
    else{
        dfs(now+1,pos,wei,num) ;
    }
}
int main()
{
//    #ifndef ONLINE_JUDGE
//        freopen("in.txt","r",stdin);
//    #endif
    int n ,  k;
    while(cin>>n>>k){
        memset(vis,0,sizeof vis) ;
        for(int i = 0 ;i<n ;i++){
            int tmp = 0;
            for(int j = 0;j<k;j++){
                int a ;
                scanf("%d",&a) ;
                tmp = tmp+pow(2,k-1-j)*a ;
            }
            vis[tmp] =1 ;
        };
        if(vis[0]){
            cout<<"YES"<<endl;
            continue ;
        }
        int flag = 0;
        int m = pow(2,k)-1;
        for(int i = 1 ;i<=m;i++){
            if(vis[i]){
                int pos[5];
                int wei =0 ;
                int tmp = i ;
                while(tmp){
                    if(tmp%2 == 1)pos[wei++]=1 ;
                    else pos[wei++] = 0 ;
                    tmp/=2;
                }
                vec.clear();
                dfs(0,pos,wei,0) ;
                //cout<<"i "<<i<<endl;
                for(int j=0;j<sz(vec);j++){
                    //cout<<vec[j]<<" ";
                    if(vis[vec[j]]){
                        flag =1 ;
                        break;
                    }
                }
               // cout<<endl;
                if(flag){
                    break ;
                }

            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
