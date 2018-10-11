#include <bits/stdc++.h> 
#define ll long long
using namespace std; 

const int ma=10000005;
vector<int>f(ma,0);
//vector<int>p[ma];
vector<int>ans(ma,0);
vector<int>a;

int main() 
{ 
    ios_base::sync_with_stdio(false);
    for(int i=2;i<=10000000;i++){
        if(f[i]==0){
            a.push_back(i);
            for(int j=1;j*i<=10000000;j++){
                f[j*i]=i;
                //p[j*i].push_back(i);
            }
        }
    }
    int n,m;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        int u=v[i];
        while(u>1){
            int fa=f[u];
            while(u%fa==0)
            u/=fa;
            ans[fa]++;
        }
    }

    vector<int>pre(a.size(),0);
    for(int i=0;i<pre.size();i++){
        if(i==0)
            pre[i]=ans[2];
        else 
            pre[i]=pre[i-1]+ans[a[i]];
    }

    int l,r;
    cin>>m;
    while(m--){
        cin>>l>>r;
        auto it1=lower_bound(a.begin(),a.end(),l);
        auto it2=lower_bound(a.begin(),a.end(),r);
        if(it2==a.end() || *it2>r)
            --it2;
        if(it1==a.begin()){
            cout<<pre[it2-a.begin()]<<endl;
            continue;
        }
        --it1;
        cout<<pre[it2-a.begin()]-pre[it1-a.begin()]<<endl;
    }
    return 0; 
} 