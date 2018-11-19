#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <set>
#include <queue>
#include <vector>
#include <map>
#include <bitset>
#include <ctime>
#include <stack>
#include <cassert>
#define mp make_pair
#define pb push_back
#define mst(a,b)  memset((a),(b),sizeof (a))
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
const int maxn=2002;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int inf = 0x3f3f3f3f;
vector<int>to[20];
void init(){
    for(int i=1;i<=15;++i){
        for(int j=i+1;j<=15;++j){
            if((i&j)==0){
                to[i].push_back(j);to[j].push_back(i);
            }
        }
    }
//    for(int i=1;i<=15;++i){
//        int sz=to[i].size();cout<<i<<": "<<sz<<"        ";
//        for(int j=0;j<sz;++j)cout<<to[i][j]<<" ";
//        cout<<endl;
//    }
//    exit(0);
}
int num[100050];
bool ap[100];
int main() {
#ifdef local
//    freopen("in.txt", "r", stdin);
#endif
    ios::sync_with_stdio(0);cin.tie(0);
    init();
    int n,g;cin>>n>>g;
    for(int i=1;i<=n;++i){
        int now=0;
        for(int j=0;j<g;++j){
            int k;cin>>k;
            now<<=1;now|=k;
        }
        if(now==0){
            cout<<"YES";return 0;
        }
        num[i]=now;
    }
    for(int i=1;i<=n;++i)ap[num[i]]=1;
    for(int i=1;i<=n;++i){
        int k=num[i];
        int sz=to[k].size();
        for(int j=0;j<sz;++j){
            if(ap[ to[k][j] ]){
                cout<<"YES";return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
