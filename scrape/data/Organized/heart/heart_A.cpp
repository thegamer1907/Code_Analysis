#include<bits/stdc++.h>
using namespace std;
vector<long long> discard;
int main()
{
    ios_base::sync_with_stdio(0);
    long long N,K; int M; cin >> N >> M >> K;

    for(int i=1;i <= M;i++) {
        long long a; cin >> a;
        discard.push_back(a);
    }
    int ans=0,Push=0,mem=0; long long tmp=0;
    int i=0;
    while(i < M){
        tmp=discard[i]-(long long)Push-((discard[i]-(long long)Push)%K);
        if((discard[i]-(long long)Push)% K != 0) tmp+=K;
        ans+=1;
        while(tmp >= discard[i]-(long long)Push && i < M){
            i++;
            mem++;
        }
        Push+=mem;
        mem=0;
    }
    cout << ans;
    return 0;
}