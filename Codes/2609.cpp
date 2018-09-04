#include<bits/stdc++.h>
using namespace std;

int cnt[10000007];
vector<pair<int,int> > prims;
bool prim[10000007];
int ans[10000007];

bool isprime(int x){
    for(int i=1;prims[i].first*prims[i].first<=x;i++){
        if(x%prims[i].first==0)return false;
    }
    return true;
}

int binser(int x){
    if(x>1e7)x=1e7;
    int st=0,en=prims.size(),mid;
    while(st<en){
        mid=(st+en)/2;
        if(prims[mid].first>=x)en=mid;
        else st=mid+1;
    }
    if(prims[st-1].first>=x)st--;
    return st;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    prims.push_back({0,0});
    for(int i=2;i*i<10000001;++i){
        if(!prim[i]){
            prims.push_back({i,0});
            for(int j=i*i;j<10000001;j+=i)prim[j]=true;
        }
    }
    for(int i=3139;i<1e7;++i){
        if(!prim[i])prims.push_back({i,0});
    }
    //cout<<prims.size();
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        cnt[x]++;
    }
    int sz=prims.size();
    for(int i=1;i<sz;++i){
        int k=1;
        //prims[i].second=prims[i-1].second;
        while(k*prims[i].first<10000007){
            prims[i].second+=cnt[prims[i].first*k++];
        }
        ans[prims[i].first]=prims[i].second;
    }
    for(int i=1;i<10000003;i++){
        ans[i]+=ans[i-1];
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        //int k=x;
        if(x>1e7){
            cout<<"0\n";
            continue;
        }
        if(y>1e7)y=1e7;
        cout<<ans[y]-ans[x-1]<<"\n";
        /*
        bool f=isprime(x);
        while(!f){
            x++;
            f=isprime(x);
        }
        f=isprime(y);
        while(!f){
            y--;
            f=isprime(y);
        }
        int t=0,tt=0;
        int st=0,en=prims.size(),mid;
        while(st<en){
            mid=(st+en)/2;
            if(prims[mid].first>x)en=mid;
            else st=mid+1;
            if(prims[mid].first==x){
                t=mid;
                break;
            }
        }
        st=0,en=prims.size(),mid;
        while(st<en){
            mid=(st+en)/2;
            if(prims[mid].first>y)en=mid;
            else st=mid+1;
            if(prims[mid].first==y){
                tt=mid;break;
            }
        }
        if(t==tt && x>k){
            cout<<"0\n";continue;
        }
        if(t==0)t++;
        if(tt==prims.size())tt--;
        cout<<prims[tt].second-prims[t-1].second<<"\n";
        */
        
        /*
        int t=binser(x),tt=binser(y);
        //cout<<prims[t].second<<" "<<prims[tt].second<<endl;
        if(t==tt){
            bool tot=false;
            for(int j=x;j<=y;++j)if(isprime(j)){
                cout<<prims[tt].second-prims[t-1].second<<"\n";tot=true;
            }
            if(!tot)cout<<"0\n";
            continue;
        }
        cout<<prims[tt].second-prims[t-1].second<<"\n";
        */
    }
    return 0;
}