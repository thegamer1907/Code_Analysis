#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <set>
#include <queue>
typedef long long ll;

using namespace std;


double h,m,s,a,b;
bool q,w,e;


int main(){
    cin >> h >> m>> s>> a>> b;
    
    if(h == 12)
        h = 0;
    
    if(a>b){
        swap(a,b);
    }
    
    s*=6;
    m*=6;
    m+= s*((double)1/60);
    
    
    h*=30;
    
    h+= (double)(m/12);
    
    if(h>360)
        h-=360;
   // cout << h << " " << m << " " <<s << endl;
    
    q = false;
    w = false;
    e = false;
    
    if(a*30<=h && h<=30*b){
        q = true;
    }
    if(a*30 <=m && m<=30*b){
        w = true;
    }
    if(a*30 <=s && s<=b*30){
        e = true;
    }
    if(q == w && w == e){
        cout << "YES\n";
        return 0;
    }else{
        cout << "NO\n";
    }
}