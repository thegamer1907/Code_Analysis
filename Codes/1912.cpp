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
#include <ctime>
#include <iterator>
#define ll long long
#define ss second
#define ff first
using namespace std;
ll n,x,y,z,w,m,t,k,a[300000],b[3][300000];
map <ll,ll> m1,m2;
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[0][i]=1;
        b[1][i]+=m1[a[i]];
        b[2][i]+=m2[a[i]];
        m1[a[i]*k]+=b[0][i];
        m2[a[i]*k]+=b[1][i];
        z+=b[2][i];
    }
    cout<<z;
    return 0;
}
