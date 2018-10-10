#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
typedef long long LL;
const int MAX_N =2e5+9;
int N,M,T,S;
int vec[MAX_N];
int res[MAX_N];
int main()
{
	while(cin>>N){
        int t = 0;
        int pos = 0;
        for(int i=0;i<N;i++){
            scanf("%d",&vec[i]);
        }
        for(int i=0;i<N;i++){
            res[i] = (vec[i]-i)/N;
            if(vec[i]>i&&(vec[i]-i)%N) res[i] ++;
        }
        int minn = 1e9+7;
        int ans = -1;
        for(int i=0;i<N;i++){
            //cout<<i<<"..."<<res[i]<<endl;
            if(res[i] < minn){
                ans = i;
                minn = res[i];
            }
        }

        cout<<ans+1<<endl;
	}
	return 0;
}
