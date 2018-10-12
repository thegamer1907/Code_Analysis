#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
#include <cstdio>
#include <numeric>
#include <cmath>
#include <cstring>
#include <array>
#include <cctype>
#include <string.h>
#include <vector>
#include <limits.h>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cassert>
#include <algorithm>
#include <functional>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <stdio.h>
#include <bitset>
using namespace std;
#define PI 3.14159265359
#define eps 1e-8
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
const int INF = 1<<29;
typedef long long ll;
/////////////////////////////////////////////////////////////////////////////////

int n;

int main(){
    ios_base::sync_with_stdio(false); //Fast I/O
    cin.tie(NULL);
    //freopen("in.txt","r",stdin);
    //freopen("output.txt","w",stdout); 

    cin >> n;
    int A[n],mn=INT_MAX,res;

    for(int i=1;i<=n;i++){
        cin >> A[i];

        A[i]=(A[i]-i+n)/n;

        if(mn>A[i]){
            mn=A[i];
            res=i;
        }
    }
    
    cout << res << endl;

    return 0;
}