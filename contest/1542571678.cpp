#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
#include<string>
#include<sstream>
#include<set>
#include<list>
#include<stack>
#include<fstream>
#include<map>
#define endl "\n"
#define DE cout << "------" << endl
#define mems(a, b) memset(a, b, sizeof a)
using namespace std;
typedef long long ll;

const int maxn = 100007;

int p[20];

int n, k;

int main(){
    mems(p, 0);
    scanf("%d%d",&n,&k);
    for(int i = 0; i < n; i++){
        int s = 0;
        for(int j = 0; j < k; j++){
            int ss;
            scanf("%d",&ss);
            s = s * 2 + ss;
        }
        p[s]++;
        //cout << s << endl;
    }
    for(int i = 0; i < (1 << k); i++){
        for(int j = (1 << k) - 1; j >= i; j--) {
            //cout << i << ' ' << j << ' ' << (i & j) << endl;
            //cout << p[i] << ' ' << p[j] << endl;
            if((i & j) == 0 && p[i] > 0 && p[j] > 0){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
}
