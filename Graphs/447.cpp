#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
#include <stack>
#include <queue>
#include <tuple>
#include <set>
#include <map>
#include <list>
#include <math.h>
#include <cmath>
typedef long long int ll;
const ll loo = 2e18;
const int ioo = 2e9;
const int md = 1e9+7;
const double eps = 1e-6;
const double PI = acos(-1);
using namespace std;
vector<char> q;
int n,t;

//write functions
void apply(int index ){
    if(index>=(int)q.size()-1)
        return;
    if(q[index]=='B'&&q[index+1] == 'G' ){
        swap(q[index+1],q[index]);
        apply(index+2);
    }else
    apply(index+1);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("source.txt","r",stdin);
    #endif
    scanf("%d%d",&n,&t);
    for(int i=0;i<=n;i++){
        char tmp; 
        scanf("%c",&tmp);
        if(i>0)
        q.push_back(tmp);
    }
   for(int i=0;i<t;i++) apply(0 );
   for(int i=0;i<n;i++){printf("%c",q[i]);}
   cout<<endl;
   return 0;
}
