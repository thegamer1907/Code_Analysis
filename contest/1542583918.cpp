#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+9;
bool arr[33];
int main(){
    int n,k;
    ios::sync_with_stdio(0);
    while(cin>>n>>k){
        int e,f;
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++){
            e=0;
            for(int j=0;j<k;j++){
                e*=2;
                cin>>f;
                e+=f;
            }
            arr[e]=1;
            //cout<<e<<endl;
        }
        bool t=0;
        int num[4];
        for(int i=1;i<(1<<(1<<k));i++){
            int tol=0;
            memset(num,0,sizeof(num));
            int tmp=i;
            bool xing=1;
            for(int j=0;j<(1<<k);j++){
                if(tmp&1){
                    if(!arr[j]){
                        xing=0;break;
                    }
                    int tt=j;
                    for(int ii=0;ii<4;ii++){
                        if(tt&1)num[ii]++;
                        tt>>=1;
                    }
                    tol++;
                }
                tmp>>=1;
            }
            for(int j=0;j<k;j++){
                if(num[j]>tol/2){
                    xing=0;break;
                }
            }
            if(xing){
                //cout<<i<<' '<<tol<<endl;
                t=1;break;
            }
        }
        if(t)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
