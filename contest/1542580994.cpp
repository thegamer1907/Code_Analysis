#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <queue>
#include <set>
#include <map>
using namespace std;
typedef long long ll;

const int inf = 1<<29;
const int mod =(int)1e9+7;

int n, k;

int a[1<<5];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif // ONLINE_JUDGE
    int t;
    while(cin>>n>>k)
    {
        int mx = 1<<k;
        int x;
        for(int i=1;i<=n;i++){
            int tmp = 0;
            for(int j=0;j<k;j++){
                scanf("%d", &x);
                if(x) tmp |= 1<<j;
            }
            a[tmp] ++;
        }
//        for(int i=0;i<mx;i++) cout<<a[i]<<" ";
//        cout<<endl;
        if(a[0]){
            return puts("YES");
        }
        for(int i=1;i<mx; i++){
            for(int j=i+1;j<mx;j++){
                bool flag = true;
                for(int kk = 0; kk<k;kk++){
                    if((i&(1<<kk)) && (j&(1<<kk))) flag = false;
                }
                if(!flag) continue;

                if(a[i] && a[j]) return puts("YES");
            }
        }
        return puts("NO");
    }
    return 0;
}