#include <bits/stdc++.h>
using namespace std;
int const MAXN=1e7+3;
int p[MAXN],occ[MAXN],f[MAXN];
int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0;i<MAXN;i++)
        if (i%2==0) p[i]=2;
        else p[i]=i;
    for (int i=3;i<MAXN;i++)
        if (p[i]==i){
            for(int j=2*i;j<MAXN;j+=i){
                if (p[j]==j)
                    p[j]=i;
            }
        }
    int n,x;
    cin>>n;
    for (int i=0;i<n;i++) cin>>x,f[x]++;
    for (int i=2;i<MAXN;i++)
        if (p[i]==i){
                occ[i]+=f[i];
            for(int j=2*i;j<MAXN;j+=i){
                   p[i]=-1;
                   occ[i]+=f[j];
            }
        }
    for (int i=1;i<MAXN;i++) occ[i]+=occ[i-1];
    int q;
    cin>>q;
    while (q--){
        int l,r;
        cin>>l>>r;
        if (r>MAXN) r=1e7;
        if (l>MAXN) l=1e7;
        cout<<occ[r]-occ[l-1]<<"\n";
    }


}
