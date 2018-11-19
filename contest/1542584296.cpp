#include <iostream>
#include <algorithm>
#include <time.h>
#include <stack>
#include <string>
#include <cstring>
#include <cassert>
#include <cstdio>
#include <cmath>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

const int N = 100005;
const int inf = 1000 * 1000 * 100;
const int mod = 1000 * 1000 * 1000 + 7;

int a,b,c,t1,t2;
bool used[25][25];
bool mark[25];

int main(){
    cin>>a>>b>>c>>t1>>t2;
    if(b == c && b == 0)
        mark[a] = true;
    else{
        int x = a + 1;
        if(x > 12) x -= 12;
        used[a][x] = true;
        used[x][a] = true;
    }
    if(c == 0 && b % 5 == 0){
        if(b == 0) b = 60;
        mark[b / 5] = true;
    }
    else{
        int aa = b / 5;
        int bb = aa + 1;
        if(aa == 0) aa = 12;
        used[aa][bb] = used[bb][aa] = true;
    }
    if(c % 5 == 0){
        if(c == 0) c = 60;
        mark[c / 5] = true;
    }
    else{
        int aa = c / 5;
        int bb = aa + 1;
        if(aa == 0) aa = 12;
        used[aa][bb] = used[bb][aa] = true;
    }
    int x = t1;
    while(true){
        if(mark[x])break;
        int nxt = x + 1;
        if(nxt > 12) nxt -= 12;
        if(used[x][nxt])break;
        x = nxt;
        if(x == t2){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    x = t1;
    while(true){
        if(mark[x])break;
        int bef = x - 1;
        if(bef == 0) bef += 12;
        if(used[x][bef])break;
        x = bef;
        if(x == t2){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
