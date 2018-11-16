#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main(){
    LL a,b;
    cin>>a>>b;
    LL ar[a];
    for(LL i=0;i<a-1;i++){
        cin>>ar[i];
    }
    vector<LL> v;
    for(LL i=0;i<a-1;i++){
        LL val=(i+1)+ar[i];
        v.push_back(val);
        i+=(ar[i]-1);
    }
    if(binary_search(v.begin(),v.end(),b)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
