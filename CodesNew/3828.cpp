#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<long long int> v(n);
    for(int i = 0 ; i < n ; i ++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long int rez=0;
    for(int i = 0 ; i < n ; i ++){
        if(i==n-1){
            long long int x=(v[n-1]-rez)/(n-1);
            rez+=x*n;
            v[i]+=x;
            long long int dst=v[i]-rez;
            if(dst)
                rez+=dst+1;
        }else{
            long long int x=v[n-1]-rez;
            long long int bn=(i+1)*(v[i+1]-v[i]);
            if(bn>=x){
                rez+=x;
                break;
            }else{
                rez+=bn;
            }
        }
    }
    cout<<rez;
}
