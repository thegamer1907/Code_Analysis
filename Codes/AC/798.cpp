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
ll n,m,x,y,z,w,ans,a[250];
string s;
int main(){
    cin>>n>>z;w=1;x=2;y=1;
    while(z%x!=y){
        w++;x*=2;y*=2;
    }
    cout<<w;
    return 0;
}
