#include<bits/stdc++.h>
using namespace std;
int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,m,k;
    scanf("%lld%lld%lld",&n,&m,&k);
    long long int p[m];
    for(int i = 0;i < n;i++){
        scanf("%lld",&p[i]);
    }
    
    long long int ans = 0;
    long long int page = 0;
    long long int pidx = 0;
    long long int c = 0;
    while(pidx < m){
        page = (p[pidx]-c-1)/k;
        
        long long int start = page*k,end = start + k + c;
        // cout<<pidx<<" "<<(p[pidx]-c)<<" "<<end<<endl;
        for(pidx;pidx < m && p[pidx] <= end;pidx++){
            c++;
        }
        
        ans++;
    }
    printf("%lld",ans);
	return 0;
}