// And upon Allah let the believers rely.
//MRMD14
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair < int, int >ii;
typedef vector < int >vi;
typedef set < int >si;
#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define  io ios_base::sync_with_stdio(false),cin.tie(),cout.tie()
#define all(a) (a).begin(), (a).end()
////////////////////////////
const int N = 100007;
int main ()
{
    io;
    string p;
    bool  f=0,l=0;
    int n;
    cin>>p>>n;
    while (n--){
        string t;
        cin>>t;
        if (t[0]==p[1])l=1;
        if (t[1]==p[0])f=1;
        else if (t == p){
            cout<<"YES";
            return 0;
        }
    }
    if(f&&l)cout<<"YES";
    else cout<<"NO";

}