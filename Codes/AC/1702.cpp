#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m, k;
    cin >> n >> m >> k;
    long long c, cnt, l=1, r=n*m, t=(l+r)/2;
    while(1){
        //cout << l << " " << r << endl;
        cnt=c=0;
        for(int i=1; i<=n; i++){
            cnt+=min(m, (t-1)/i);
            if(t%i==0 && t/i<=m)c++;
        }
        if(cnt+c>=k){
            if(cnt<k){
                cout << t; return 0;
            }
            r=t;
            t=(l+r)/2;
        }
        else{
            l=t+1;
            t=(l+r)/2;
        }
    }
    return 0;
} 