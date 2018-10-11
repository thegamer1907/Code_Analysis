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
        int lo=0,hi=a.size()-1,ans1=0,ans2=0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(a[mid]<l){
                ans1=mid,lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        
        lo=0,hi=a.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(a[mid]<=r){
                ans2=mid,lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        int uu=(a[ans1]==l ? 0: pre[ans1]);
        cout<<pre[ans2]-uu<<endl;
    }
    return 0; 
} 