/// i am on fire
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <stack>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;

const int N=100005;
const int M=205;

typedef long long ll;
typedef pair<int,int>ii;
typedef pair<int,ii>node;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

int a[10000001],arr[10000001];
bool is[10000000];
void sieve(){
 is[0]=is[1]=1;
 for(int i=2;i<10000001;i++){
    if(is[i]==0){
        for(int j=i;j<10000001;j+=i){
            a[i]+=arr[j];
            is[j]=1;
        }
    }
 }
}
int main(){

   //  freopen("test.in","r",stdin);
     //freopen("input.txt","w",stdout);
    int n;
    memset(arr,0,sizeof(arr));
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[a]++;
    }
    sieve();
    for(int i=1;i<=10000000;i++)
        a[i]+=a[i-1];
    int m;
    scanf("%d",&m);
    while(m--){
        int l,r;
        scanf("%d%d",&l,&r);
        l=min(l,10000000);
        r=min(r,10000000);
        printf("%d\n",a[r]-a[l-1]);
    }
    return 0;
}
