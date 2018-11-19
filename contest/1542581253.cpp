#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int to = (1<<k);
    int ar[to] = {0};
    for(int i = 0; i < n; i++){
        int a = 0;
        for(int i = 0; i < k; i++){
            int x;
            cin >> x;
            a = a<<1;
            a+=x;
        }
        ar[a]++;
    }
    int mask = 1<<(k);
    mask-=1;
    bool ans = false;
    if(ar[0]>0) ans = true;
    for(int i = 0; i < to && !ans; i++){
        int tm = mask ^ i;
        //cout<<i<<" " <<tm<<endl;
        if(ar[i] > 0)
        for(int j = 0; j < to && !ans; j++){
            if((i & j) == 0){
                if(ar[j]>0) ans = true;
            }

        }
    }
    cout<<(ans?"YES":"NO")<<endl;
    return 0;
}
