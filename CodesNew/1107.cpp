#include <bits/stdc++.h>

using namespace std;
long long n;
bool check(long long cur){
    long long sum=0,tn=n;
    if(cur==0){
        return false;
    }
    while(tn>0){
        if(tn<cur){
            sum+=tn;
            tn=0;
        }
        else {
            sum +=cur;
            tn-=cur;
            tn-=(tn/10);
        }
    }
    if(sum>=(n+1)/2){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    /*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    long long l=0,r=n,mid;
    while (true){
        mid=l+(r-l)/2;
        if(l>=r){
            break;
        }
        if(check(mid)){
            r=mid;
        }
        else{
            l=mid+1;
        }
    }
    cout<<r<<endl;
    return 0;
}