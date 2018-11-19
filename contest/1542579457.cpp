#include<bits/stdc++.h>
using namespace std;
int n,k,x,a[1111111],u[121],ts,v,test;
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
            cin >> x;
            if(j==1)a[i]=x;
            else{
                a[i]<<=1;
                a[i]+=x;
            }
        }
        u[a[i]]=1;
    }
    ts=1;
    for(int i = 2; i <= k; i++){
            ts<<=1;
            ts+=1;
    }
    for(int i = 1; i <= n; i++){
        v=a[i]^ts;
        for(int j = v; j >= 0; j--){
            if(u[j]){

                int ppj=__builtin_popcount(j);
                int ppi=__builtin_popcount(a[i]);
                test=j+a[i];
                if(__builtin_popcount(test)==ppj+ppi){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
}
