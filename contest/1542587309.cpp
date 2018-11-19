#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <string>
using namespace std;
const int N = 3e5 + 10;
const int inf = 1e9 + 5;
const int mod = 1e9 + 7;
typedef long long ll;
int h, m, s, t1, t2;
int ch(int mid){
    return (t1 <= mid && mid <= t2);
}
int main(){
    cin >> h >> m >> s >> t1 >> t2;
    if(t1 > t2) swap(t1, t2);
    t1 = 3600 * t1;
    t2 = 3600 * t2;
    h = 3600 * h + m * 60 + s;
    m = 60 * 12 * m + 12 * s;
    s = 60 * 12 * s;
    int flag1 = 0;
    int flag2 = 0;
    if(ch(h)) flag1 = 1;
    else flag2 = 1;
    if(ch(m)) flag1 = 1;
    else flag2 = 1;
    if(ch(s)) flag1 = 1;
    else flag2 = 1;
    if(!flag1 || !flag2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
