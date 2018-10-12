//sumit mamtani
typedef long long ll;
#include <iomanip>
#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <list>
#define M 1000000007
#define X 998244353
#include <memory.h>
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define pa pair<int,int>
#define  INF 100000000
#define eps 1e-9

using namespace std;


ll n,m;
set<string> s1;
ll a,b;
ll com;
string str;
int main(){
    ll i,x,j,k;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>str;
        s1.insert(str);
    }
    for(i=0;i<m;i++){
        cin>>str;
        if(s1.find(str)!=s1.end()){
            com++;
        }
    }
    a=n-com;
    b=m-com;

    if(com%2==0){
        if(a>b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        if(b<=a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
