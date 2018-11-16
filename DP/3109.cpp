#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <cmath>
#include <locale>
using namespace std;
#define MS0(I) memset(I, 0, sizeof(I));
#define MS1(I) memset(I, -1, sizeof(I));
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, s, n) for(int i = (s); i < (n); ++i)
#define per1(i, a, b) for(int i = a; i >= b; --i)
#define mkp make_pair
#define pb push_back 
#define F first
#define S second
#define ALL(I) (I).begin(), (I).end()
typedef const void CV;
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
const int INF = (int)1e9;
const int mod = (int)1e9+7;
const int MAX = (int)5e2+5;
char store[MAX][MAX];
int row[MAX][MAX], col[MAX][MAX];
int r, c;
void build(){
    rep1(j, 1, c+1){
        per1(i, r, 1){
            row[i][j] = row[i+1][j];
            if(store[i][j] == '.' && store[i+1][j] == '.')
                row[i][j]++;
        }
    }

    rep1(i, 1, r+1){
        per1(j, c, 1){
            col[i][j] = col[i][j+1];
            if(store[i][j] == '.' && store[i][j+1] == '.')
                col[i][j]++;
        }
    }


    return ;
}
int main(void){
    scanf("%d %d", &r, &c);
    rep1(i, 1, r+1) scanf("%s", &store[i][1]);
    build();
    int q; scanf("%d", &q);
    rep(i, q){
        int r1, c1, r2, c2; scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
        int res = 0;
        rep1(j, c1, c2+1){
            res += row[r1][j] - row[r2+1][j];
            if(store[r2][j] == '.' && store[r2+1][j] == '.') res--;
        }
        rep1(j, r1, r2+1){
            res += col[j][c1] - col[j][c2+1];
            if(store[j][c2] == '.' && store[j][c2+1] == '.') res--;
        }
        printf("%d\n", res);
    }
    return 0;
}
