//HASHEMESHOON hastam ;)
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstdio>
#include <map>
#include <string>
#include <set>
#include <vector>
#include <stack>
#include <deque>
#include <queue>
#define ll long long
#define ss second
#define ff first
using namespace std;
ll a[100100],x,y,n,m,ans,b[100100],c[100100];
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=n-1;i>-1;i--){
        b[i]=b[i+1];
        c[a[i]]++;
        if(c[a[i]]==1)b[i]++;
    }
    for(int i=0;i<m;i++){
        cin>>x;
        cout<<b[x-1]<<endl;
    }
    return 0;
}
