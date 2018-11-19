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

int n;
string s,ss;

int main(){
    cin>>ss>>n;
    bool f1 = false,f2 = false;
    for(int i=1;i<=n;i++){
        cin>>s;
        if(s == ss){
            cout<<"YES"<<endl;
            return 0;
        }
        if(s[0] == ss[1])f1 = true;
        if(s[1] == ss[0])f2 = true;
    }
    if(f1 && f2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
