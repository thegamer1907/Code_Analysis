#include<bits/stdc++.h>

using namespace std;

const int maxi=1e6;
long long l,r;
int main(){

    cin>>l>>r;

    if (l==r) return !printf("0\n");

    long long cura=0;
    long long curb=0;

    for (int i=60;i>=0;i--){
       long long val=1ll<<i;
       if (cura+val<=r && curb+val-1>=l)
        cura+=val;
       else
        if (cura+val-1>=l && curb+val<=r)
        curb+=val; else
       if (cura+val<=r &&curb+val<=r){
        cura+=val;
        curb+=val;
       }
    }

    cout<<(cura^curb)<<endl;

    return 0;
}
