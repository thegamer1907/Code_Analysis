#include<iostream>
#include<cstdio>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<string.h>
#include<cstring>
#include<vector>
using namespace std;
#define INF 0x3f3f3f3f
#define mem(x,y) memset(x,y,sizeof(x))
typedef long long LL;
int n,d;
struct node {

    int value,x;
    bool operator <(const node &a)const {
        return this->x<a.x;
    }

} sz[100000+100];
inline int read() {
    int ret=0,c,f=1;
    for(c=getchar(); !(isdigit(c)||c=='-'); c=getchar());
    if(c=='-') f=-1,c=getchar();
    for(; isdigit(c); c=getchar()) ret=ret*10+c-'0';
    if(f<0) ret=-ret;
    return ret;
}
int main() {
   // freopen("input.txt","r",stdin);
    while(cin>>n>>d) {

        for(int i=0; i<n; i++) {
            sz[i].x=read();
            sz[i].value=read();
        }
        sort(sz,sz+n);
        LL maxn=0,sum=0,l=0;
        for(int i=0; i<n; i++) {
            sum+=sz[i].value;
            if(sz[i].x-sz[l].x>=d) {
                while(sz[i].x-sz[l].x>=d) {
                    sum-=sz[l].value;
                    l++;
                }
            }
          //  cout<<sum<<endl;
            maxn=max(maxn,sum);
        }
        cout<<maxn<<endl;

    }

    return 0;
}

	 			 			 	 		 			   				     	