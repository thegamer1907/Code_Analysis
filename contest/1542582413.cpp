#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
using namespace std;
int vis[20];
int cal(int x)
{
    //cout<<x<<endl;
    int k=x;
    for(int i=0;i<20;i++){
        if(vis[i]){
            k=x;
            int y=i;
            int flag=0;
            while(k||y){
                int a=k%2;
                int b=y%2;
                if(a+b>=2){
                    flag++;
                    break;
                }
                //cout<<k<<" "<<y<<endl;
                k/=2;
                y/=2;

            }
            //cout<<i<<endl;
            if(!flag) return 1;
        }
    }
    return 0;

}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    memset(vis,0,sizeof(vis));
    for(int i=0;i<n;i++){
        int x=0;
        for(int j=0;j<k;j++){
            int y;
            scanf("%d",&y);
            x=x*2+y;
        }
        //cout<<x<<endl;
        vis[x]++;

    }
    //cout<<"gg"<<endl;
    int flag=0;
    for(int i=0;i<(1<<k);i++){
        if(vis[i]){
            if(cal(i)){
                flag=1;
                break;
            }
        }
    }
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}
