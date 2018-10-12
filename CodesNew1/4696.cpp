///====================== TEMPLATE STARTS HERE =====================///
//#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<utility>
#include<map>
#include<queue>
#include<stack>
#include<vector>
#include<deque>
#include<functional>
#include<string>
#include<iostream>
#include<cctype>
#include<set>
#include<climits>
#include<iomanip>
#include<cassert>
#include<sstream>
//#include<unordered_map>
const int inf = 1000000007;
const double pi = 2 * acos ( 0.0 );
typedef long long ll;
#define pb push_back
#define pf push_front
#define all(v) v.begin(), v.end()
#define maximum(v) *max_element(v.begin(), v.end())
#define minimum(v) *min_element(v.begin(), v.end())
#define MEMSET(v) memset(v, 0, sizeof(v))
//int dx[] = {0, 1, 0, -1};
//int dy[] = {-1, 0, 1, 0};
using namespace std;

int gcd (int a, int b ) {
    a =  abs( a ); b = abs( b );
    while ( b ) { a = a % b; swap ( a, b ); } return a;
}
///====================== TEMPLATE ends HERE =====================///

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n);
    int ans = n;
    int track=n/2, check = 0;
    for(int i=0; i<n/2; i++){
        for(;;){
            if(track > n-1){
                check = 1;
                break;
            }

            if(arr[track] >= arr[i]*2){
                ans--;
                track++;
                break;
            }
            else{
                track++;
            }
        }
        if(check == 1){
            break;
        }
    }
    cout << ans << endl;
}
