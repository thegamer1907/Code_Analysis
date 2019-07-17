#include <bits/stdc++.h>
  
using namespace std;
  
#define int long long
#define ff first
#define ss second
const int N = 100010;
const int MOD = 998244353;


 
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m,k;
    cin >> n>>m>>k;
    int p[N];
    for (int i  =0;i<m;i++){
        cin>> p[i];
    }
    int c = k;
    int i = 0;
    int ans = 0;
    while(i<m){
        int j = i;
        while(j<m && (p[j]<=k))j++;
        if (j-i!= 0){
            k += j-i;
            i = j;  
            ans++;
        }
        else{
            k+= ((p[i] - k + c-1)/c)*c;    
        }
    }
    cout <<ans;


 }