#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <cstring>
#include <iomanip>
#include <cctype>
#include <map>
#include <cassert>

using namespace std;

int f[1000005];
int cnt[1000005];

int main() {
    string s; cin>>s;
    int m = (int)s.length();
    f[0] = f[1] = 0;
    for(int i = 2;i <= m;i++) {
        int j = f[i - 1];
        while(true) {
            if(s[j] == s[i - 1]) {
                f[i] = j + 1;
                break;
            }
            if(j == 0) {
                f[i] = 0;
                break;
            }
            j = f[j];
        }
    }
    for(int i = 2;i < m;i++) {
        cnt[f[i]]++;
    }
    int c = f[m];
        if((c!=0 && c!=m-1 && cnt[c]!=0) ) {
            cout<<s.substr(0,c)<<endl;
            return 0;
        }
        
        c = f[c];
        
        if((c!=0 && cnt[c]!=0) ) {
            cout<<s.substr(0,c)<<endl;
            return 0;
        }
        
        
    cout<<"Just a legend"<<endl;
}