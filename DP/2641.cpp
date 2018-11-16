#include<bits/stdc++.h>
#define ll long long
using namespace std;
short sod[11000009];
main(){
    vector<int> v;
    int t = 0;
    while(v.size() <= 10000){
        t++;
        if(t <10) sod[t] = t;
        else sod[t] = sod[t/10]+t%10;
        if(sod[t] == 10) v.push_back(t);
    }
    int k;
    cin>>k;
    cout<<v[k-1]<<endl;
}
