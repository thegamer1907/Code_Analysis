#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
typedef long long LL;
const int MAX_N = 1e5+9;
int N,M,T,S;
int vec[MAX_N];

int main(){
    while(cin>>N){
        for(int i=0;i<N;i++){
            scanf("%d",&vec[i]);
        }
        sort(vec,vec+N);
        cin>>T;
        for(int i=0;i<T;i++){
            scanf("%d",&M);
            int pos = upper_bound(vec,vec+N,M) - vec;
            printf("%d\n",pos);
        }
    }
    return 0;
}
