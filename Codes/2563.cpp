#include <iostream>

using namespace std;
const int N = 10000000;
int cnt[10+N];
bool prime[N+10];
int d[N+10];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        cnt[x]++;
    }
    for(int i=2;i<=N;i++){
        if(!prime[i]){
            for(int j=i;j<=N;j+=i){
                    d[i]+=cnt[j];
            }
            if(i*1LL*i<=N*1LL){
                for(int j=i*i;j<=N;j+=i){
                    prime[j]=true;
                    ///d[i]+=cnt[j];
                }
            }
        }
    }
    d[0]=0;
    d[1]=0;
    for(int i=2;i<=N;i++){
        d[i]=d[i]+d[i-1];
    }

    int m;
    cin>>m;
    int l,r;
    for(int i=0;i<m;i++){
        cin>>l>>r;
        if(r>N)r=N;
        if(l>N)l=N;
        cout<<d[r]-d[l-1]<<"\n";
    }

    return 0;
}
