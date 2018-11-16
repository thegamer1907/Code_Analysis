#include<bits/stdc++.h>
using namespace std;
int a[100005];
set<int> diffs;
int numdiffs[100005];

int main(){
    int n,m;
    scanf("%i %i",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%i",&a[i]);
    }
    for(int i=n;i>=0;i--){
        diffs.insert(a[i]);
        numdiffs[i]=diffs.size();
    }
    int q;
    for(int i=0;i<m;i++){
        scanf("%i",&q);
        printf("%i\n",numdiffs[q]);
    }
}
