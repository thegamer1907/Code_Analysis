#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<set>
#include<queue>
#include<vector>
#include<iterator>
#include<stack>
#include<map>
#include<math.h>
using namespace std ;
#define clr(x) memset(x,0,sizeof(x))
typedef long long ll;
typedef long double ld;
const int inf = 0x3f3f3f3f;
const ll llinf = 0x3f3f3f3f3f3f3f3f ;
const int maxn = 5e5 + 5 ;
const int mod = 10007 ;
const double eps = 1e-5 ;

string ch[maxn] ;

int main() {
    int n ;
    while(~scanf("%d" , &n)) {
        for(int i = 0 ; i < n ; i ++)
            cin >> ch[i] ;
        for(int i = n-2 ; i >= 0 ; i --) {
            int p1 = 0 , p2 = 0 ;
            bool flag = true ;
            while(true) {
                if(ch[i+1][p1] < ch[i][p2]) {
                    if(flag) {
                        ch[i] = ch[i].substr(0 , p2) ;
                    }
                    break ;
                }
                if(ch[i+1][p1] > ch[i][p2]) {
                    flag = false ;
                }
                if(++p2 >= ch[i].size())
                    break ;
                if(++p1 >= ch[i+1].size()) {
                    if(flag)
                        ch[i] = ch[i].substr(0 , p2) ;
                    break ;
                }
            }
        }

        for(int i = 0 ; i < n ; i ++)
            cout<<ch[i]<<endl;
    }
    return 0 ;
}
