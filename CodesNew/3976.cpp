#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int n,q;
cin>>n>>q;
ll b;
vector <ll> warrior,arrows;
for(int i=0;i<n;++i){cin>>b;warrior.push_back(b);}
for(int i=0;i<q;++i){cin>>b;arrows.push_back(b);}
vector <ll>sum(warrior.size());
partial_sum(warrior.begin(),warrior.end(),sum.begin());
ll index=0;
for(auto x : arrows){
    index+=x;
    if(index>=sum.back())index=0;
    auto l=lower_bound(sum.begin(),sum.end(),index);
    if(*l==index){
        cout<<distance(l,sum.end())-1<<endl;
    }
    else{
        cout<<distance(l,sum.end())<<endl;

    }
}
}


