#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#define f1 first
#define s2 second

using namespace std;

vector < pair < pair <long long, long long>, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
priority_queue < pair <long long, long long>, vector <pair <long long, long long> >, greater <pair <long long, long long> > > q;

string str, str1, str2, star[100005];
long long row[100005];


bool comp(pair < pair <long long, long long>, long long> i, pair < pair <long long, long long>, long long> j){
    if(i.f1.f1==j.f1.f1){
        return (i.f1.s2<j.f1.s2);
    }
    return (i.f1.f1<j.f1.f1);
}

bool comp2(pair <long long, long long> i, pair <long long, long long> j){
    if(i.f1==j.f1){
        return (i.s2<j.s2);
    }
    return (i.f1<j.f1);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, l, r;
    cin >> n >> m;
    long long ant[n+5][m+5];
    long long vis[n+5][m+5];
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin >> ant[i][j];
        }
    }
    memset(vis, 0, sizeof vis);
    memset(row, 0, sizeof row);
    row[1] = 1;
    for(i=1;i<=m;i++){
        vis[1][i] = 1;
        for(j=2;j<=n;j++){
            if(ant[j][i]>=ant[j-1][i]){
                vis[j][i] = vis[j-1][i]+1;
            }
            else{
                vis[j][i] = 1;
            }
            row[j] = max(row[j], vis[j][i]);
        }
    }
    cin >> d;
    for(i=0;i<d;i++){
        cin >> a >> b;
        c = row[b];
        if(b-a+1<=c) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}












