#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
#include <complex>

using namespace std;
void file(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
}
int dx[8]={1,-1,0,0,1,-1,1,-1};
int dy[8]={0,0,-1,1,1,-1,-1,1};
bool iscomp[10000007];
int acc[10000007],a[10000007],n,q,l,r;
vector<int> all;
int main(){
    scanf("%d",&n);
    int foo;
    int mx=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&foo);
        a[foo]++;
        mx=max(mx,foo);
    }
    iscomp[0]=iscomp[1]=1;
    for(int i=2;i<=mx;i+=2){
        iscomp[i]=1;
        acc[2]+=a[i];
    }
    for(int i=3;i<=mx;i+=2){
        if(iscomp[i]){continue;}
        for(int j=1;1LL*i*j<=mx;j++){
            iscomp[i*j]=1;
            acc[i]+=a[i*j];
        }
    }
   // cout<<acc[2]<<" "<<acc[3]<<endl;
    for(int i=1;i<=mx;i++){
        acc[i]+=acc[i-1];
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d%d",&l,&r);
        if(l>mx){
            cout<<"0"<<endl;
            continue;
        }
        r=min(r,mx);
        cout<<acc[r]-acc[l-1]<<endl;
        
    }
    
    return 0;
}