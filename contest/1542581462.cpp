#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <sstream>
#include <vector>
#define PI acos(-1.0)
#define N 111111
#define M 1000000007
#define inf 2e9
#define eps 1e-8
#define dazhi 2147483647
using namespace std;

typedef long long ll;


/****************************************/

int gg[1000];
int a[10];
int n,k;
int sou()
{
    int ans=0;
    for(int i=0;i<k;i++)
        ans=ans*2+a[i];
    return ans;
}
int pan(int x,int y)
{
    int ans=k;
    while(x||y){
        ans=x%2+y%2;
        if(ans==2)return 0;
        x/=2;y/=2;
    }
    return 1;
}
int main()
{
    scanf("%d%d",&n,&k);

    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++)
            scanf("%d",&a[j]);
        gg[sou()]=1;
    }
    int m=1;
    m=m<<k;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(gg[i]&&gg[j]){
                if(pan(i,j)){
                    //printf("%d %d **\n",i,j);
                    puts("YES");return 0;
                }
            }
        }
    }
    puts("NO");
}
