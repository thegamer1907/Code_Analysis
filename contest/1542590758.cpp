#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<string.h>
#include<set>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<cmath>
typedef long long ll;
typedef unsigned long long LL;
using namespace std;
const double PI=acos(-1.0);
const double eps=0.0000000001;
const int N=500000+100;
const int INF=0x3f3f3f3f;
string a;
string b[1005];
int main(){
    cin>>a;
    char c1=a[0],c2=a[1];
    int n;
    scanf("%d",&n);
    int flag=0;
    for(int i=1;i<=n;i++){
        cin>>b[i];
        if(c1==b[i][0]&&c2==b[i][1])flag=1;
        if(c1==b[i][1]&&c2==b[i][0])flag=1;
    }
    int t1=0;
    int t2=0;
    for(int i=1;i<=n;i++){
        if(c1==b[i][1])t1=1;
        if(c2==b[i][0])t2=1;
    }
    if(flag||(t1&&t2))cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
