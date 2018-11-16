#include <bits/stdc++.h>
using namespace std;
int n,a,b;
int tree[4000];
int d = 0;
int ans = -1;
void build(int v,int l,int r,int u){
    if(d)return;
    if(l==r){
        tree[v] = (l==a||l==b);
        return;
    }
    int m = (l+r)/2;
    build(2*v,l,m,u-1);
    if(d)return;
    build(2*v+1,m+1,r,u-1);
    if(d)return;
    tree[v] = tree[2*v]||tree[2*v+1];
    if(tree[2*v]&&tree[2*v+1]){
        ans = u;
        d = 1;
        return;
    }

}
int main()
{
    cin >> n >> a >> b;
    a--;
    b--;
    int o = n;
    int z = 0 ;
    while(o>1){
        o/=2;
        z++;
    }

    build(1,0,n-1,z);

    if(ans==z)cout << "Final!";
    else cout << ans;
    return 0;
}
