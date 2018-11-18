#include<bits/stdc++.h>
using namespace std;
set< vector<int> > ss;
vector<int>v;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n,k; cin>>n>>k;
    for(int i=1; i<=n; i++){\
        for(int j=0; j<k; j++){
            int x; cin>>x;
            v.push_back(x);
        }
        ss.insert(v);
        v.clear();
    }

    if(ss.size()==1){
        auto it = ss.begin();
        auto u = *it;
        int f = 1;
        for(int i=0; i<k; i++){
            if(u[i]==1){
                f = 0; break;
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        for(auto it = ss.begin(); it!=ss.end(); it++){
            auto jt=it; jt++;
            for( ; jt!=ss.end(); jt++){
                auto x = *it;
                auto y = *jt;
                int f = 1;
                for(int i=0; i<k; i++){
                    if(x[i]==1&&y[i]==1){
                        f = 0; break;
                    }
                }

                if(f){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }

        cout<<"NO"<<endl;
    }
    return 0;
}
