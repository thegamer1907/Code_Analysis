//Sinhov
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define prec(x) fixed<<setprecision(x)
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    ll n,x,y,k,flag,m,i,g, a, b, c, val = 0,h, t, f, q, l, r,  y1, j, x1, e, x0, x2, y2, w, p, v, d, u, num;
    string s;
    cin>>s>>n;
    vector<string>arr(n);
    flag=0;
    for(i=0;i<n;i++) {
        cin >> arr[i];
        if(arr[i]==s)
            flag=1;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][1]==s[0] and arr[j][0]==s[1])
                flag=1;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}