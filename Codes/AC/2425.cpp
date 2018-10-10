#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
vector<int> arr;
int cnt[10000001],f[10000001],vis[10000001];
int seg[2*10000000];
void build(int node,int l,int r){
    if(l==r){
        seg[node] = f[l];
        return;
    }
    int lc = 2*node;
    int rc = lc+1;
    build(lc,l,l+(r-l)/2);
    build(rc,l+(r-l)/2+1,r);
    seg[node] = seg[lc]+seg[rc];
    return;
}
int rangeQ(int node,int x,int y,int l,int r){
    if(y<l or x>r){
        return 0;
    }
    if(x>=l and y<=r){
        return seg[node];
    }
    int lc = 2*node;
    int rc = lc+1;
    return rangeQ(lc,x,x+(y-x)/2,l,r)+rangeQ(rc,x+(y-x)/2+1,y,l,r);
}
int main(){
    ios::sync_with_stdio(false);
    for(int i=0;i<=10000000;i++){
        cnt[i]=0;
        f[i]=0;
        vis[i]=0;
    }
    cin >> n;
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        cnt[arr[i]]++;
    }
    for(int i=2;i<=10000000;i++){
        if(vis[i]==0){
            for(int j=i;j<=10000000;j+=i){
                f[i]+=cnt[j];
                vis[j]=1;
            }
        }
    }
    build(1,0,10000000);
    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        int li,ri;
        cin >> li >> ri;
        cout << rangeQ(1,0,10000000,li,ri) << endl;
    }
    return 0;
}