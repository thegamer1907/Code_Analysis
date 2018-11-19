#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>
using namespace std;
typedef long long LL;
const int maxn = 2e6 + 7;
const int INF = 0x7fffffff;
int num[20];
int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int n,k;
    while(cin>>n>>k){
        memset(num,0,sizeof(num));
        for(int i=0;i<n;i++){
            int t;
            int cur=0;
            for(int j=0;j<k;j++){
                scanf("%d",&t);
                if(t){
                    cur|=(1<<(k-1-j));
                }
            }
            num[cur]++;
        }
        int flag = 0;
        if(num[0]){
            flag = 1;
        }
        
        for(int i=1;i<15;i++){
            for(int j=1;j<15;j++){
                int temp = 1;
                if(num[i]==0||num[j]==0)continue;
                if(i==j){
                    if(num[i]<2)
                        continue;
                }
                //cout<<i<<' '<<j<<endl;
                for(int p=0;p<k;p++){
                    if((i&(1<<p))){
                        if((j&(1<<p))){
                         //   cout<<i<<' '<<j<<endl;
                            temp=0;break;
                        }
                    }
                }
                if(temp){
                 ///   cout<<i<<' '<<j<<endl;
                   // cout<<"....\n";
                    flag=1;
                }
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}