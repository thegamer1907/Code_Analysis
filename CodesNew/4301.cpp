#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define pb push_back
#define mp(x,y) make_pair(x,y)
#define scd(n) scanf("%d",&n)
#define sclf(n) scanf("%lf",&n)
#define scl(n) scanf("%I64d",&n)
#define repi(a,b,c) for(int i=a;i<b;i+=c)
#define repis(a,b,c) for(int i=a-1;i>=b;i-=c)
#define repj(a,b,c) for(int j=a;j<b;j+=c)
#define repjs(a,b,c) for(int j=a-1;j>=b;j-=c)
#define repk(a,b,c) for(int k=a;k<b;k+=c)
#define repks(a,b,c) for(int k=a-1;k>=0;k-=c)
#define fi first
#define se second

/*
 fast I/O

ios::sync_with_stdio(0);
cin.tie();

 freeopen

 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 */

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int mx = 200100;
const int md = 1000000007;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();
    int n;
    vector <string> arr,ars,arz;
    cin >> n;
    repi(0,n,1) {
        string x;
        cin >> x;
        arr.pb(x);
    }
    repi(0,n,1) {
        if(i == n-1) ars.pb(arr[i]);
        else {
            string temp = "";
            bool can = false;
            repj(0,arr[i].size(),1) {
                if(can) temp += arr[i][j];
                else if(j >= arr[i+1].size()) {
                    if(arr[i][arr[i+1].size()-1] < arr[i+1][arr[i+1].size()-1]) temp += arr[i][j];
                    else break;
                }
                else {
                    if(arr[i][j] < arr[i+1][j])  can = true;
                    if(arr[i][j] <= arr[i+1][j]) temp += arr[i][j];
                    else break;
                }
            }
            ars.pb(temp);
        }
    }
    //cout << "BEFORE\n";
    //repi(0,n,1) cout << ars[i] << "\n";
    //cout << endl;
    repis(n,0,1) {
        if(i == n-1) arz.pb(ars[i]);
        else {
            string temp = "";
             bool can = false;
            repj(0,ars[i].size(),1) {
                if(can) temp += ars[i][j];
                else if(j >= arz[arz.size()-1].size()) {
                    if(ars[i][arz[arz.size()-1].size()-1] < arz[arz.size()-1][arz[arz.size()-1].size()-1]) temp += ars[i][j];
                    else break;
                }
                else {
                    if(ars[i][j] < arz[arz.size()-1][j])  can = true;
                    if(ars[i][j] <= arz[arz.size()-1][j]) temp += ars[i][j];
                    else break;
                }
            }
            arz.pb(temp);
        }
    }
    //cout << "AFTER\n";
    repis(n,0,1) cout << arz[i] << "\n";
}
