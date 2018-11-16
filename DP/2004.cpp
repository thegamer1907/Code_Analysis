#include<bits/stdc++.h>
using namespace std;
int a[100005];
int b[100005];
set<int> aa;
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=n-1;i>=0;i--){
        aa.insert(a[i]);
        b[i] = aa.size();
    }
    for(int i=0,x;i<m;i++){
        scanf("%d",&x);
        printf("%d\n",b[x-1]);
    }
    return 0;
}