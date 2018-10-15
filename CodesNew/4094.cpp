#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
const int MAX_N = 2e5+9;
const int INF = 1e9+9;
int N,M,T,S;
long long vec[MAX_N];
long long res[MAX_N];

int main(){
    while(cin>>N>>M)
    {
        long long sum =0;
        for(int i=0;i<N;i++){
            scanf("%lld",&vec[i]);
            sum += vec[i];
        }
        for(int i=1;i<N;i++){
            vec[i] += vec[i-1];
        }
        for(int i=0;i<M;i++){
            scanf("%lld",&res[i]);
        }
        long long num =0 ;
        for(int i=0;i<M;i++){
            num += res[i];
            if(num >= sum) {
                printf("%d\n",N);
                num = 0;
                continue;
            }
            int pos = upper_bound(vec,vec+N,num) - vec;
            printf("%d\n",N-pos);
        }

    }
    return 0;
}
