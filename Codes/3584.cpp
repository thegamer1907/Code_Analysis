#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 2e5+9;
const long long INF = 6e18;
typedef pair<long long,long long> P;
long long N,M,T,S,K;
long long x;
P vec[MAX_N];
long long vec1[MAX_N];
long long vec2[MAX_N];
int main()
{
    while(cin>>N>>M>>K){
        cin>>x>>S;
        vec[0].first = x;
        vec[0].second = 0;
        for(int i=1;i<=M;i++){
            scanf("%lld",&vec[i].first);
        }
        for(int i=1;i<=M;i++){
            scanf("%lld",&vec[i].second);
        }
        for(int i=0;i<K;i++){
            scanf("%lld",&vec1[i]);
        }
        for(int i=0;i<K;i++){
            scanf("%lld",&vec2[i]);
        }
        long long ans = INF;
        for(int i=0;i<=M;i++){
            if(S>=vec[i].second){
                long long a = vec[i].first;
                long long c = vec[i].second;
                long long sum = S - c;
                long long pos = upper_bound(vec2,vec2+K,sum) - vec2;
                pos -= 1;
                if(pos >= 0){
                    long long res = (N-vec1[pos])*a;
                    ans = min(ans,res);
                }
                else {
                    long long res = N*a;
                    //cout<<"res.."<<res<<endl;
                    ans = min(ans,res);
                }
                //cout<<"...."<<pos<<endl;
                //cout<<a<<"...."<<sum<<"....."<<vec2[pos]<<"...."<<vec1[pos]<<endl;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
