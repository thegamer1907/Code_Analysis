#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int N=3662;
int a[1234567];
int sum[10000005];
bitset<N>p;
vector<int>v;
void sieve(){
    for(int i=3;i*i<N;i+=2)if(!p[i])for(int j=i*i;j<N;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(int i=3;i<N;i+=2)if(!p[i])v.push_back(i);
}
int main(){
    sieve();
    //cout<<v[v.size()-1]*v[v.size()-1]<<endl;
    int n;
    memset(sum,0,sizeof sum);
        scanf("%d",&n);
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        int ct=1;
        for(int i=0;i<v.size();i++){
            int cnt=0;
           for(int j=1;j<=n;j++){
                if(a[j]%v[i]==0){
                    cnt++;
                    while(a[j]%v[i]==0)a[j]/=v[i];
                }
           }
            sum[v[i]]+=cnt;
        }
        for(int j=1;j<=n;j++){
            if(a[j]>1)sum[a[j]]++;
        }
        int m;
        sum[0]=0;
        for(int i=1;i<10000005;i++){
            sum[i]+=sum[i-1];
        }
        scanf("%d",&m);
        while(m--){
            int l,r;
            scanf("%d%d",&l,&r);
            l=min(l,10000000);
            r=min(r,10000000);
            printf("%d\n",sum[r]-sum[l-1]);
        }
}
