#include <bits/stdc++.h>
    using namespace std;
    #define ll long long

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int i,total;
        ll n,k;
        vector<ll> v;
        cin>>n>>total>>k;

        for(i=0;i<total;i++){
            ll val;
            cin>>val;
            v.push_back(val);
        }

        ll lim=k;
        int _count=0;
        for(i=0;i<total;){
            int c=0;
            if(lim<v[i]){
                double dif = v[i]-lim;
                int kk = floor(dif/k);
                ll x = kk*k;
                lim+=x;
            }

            while(i<total && v[i]<=lim){
                i++;
                c++;
            }

            if(c)_count++;
            if(!c) lim+=k;
            lim+=c;
        }

        cout<<_count<<"\n";
        return 0;
    }