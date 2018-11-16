/* Author: Mayank Sharma
email: mayank04111998@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);\
cin.tie(NULL);
#define TEST int T;\
cin>>T;
#define FORI(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define ci pair<char,int>
#define pb push_back
typedef unsigned long long ull;


int main(int argc, char const *argv[]){
    FAST;
    int N;
    cin>>N;
    int x,y,z;
    int sx,sy,sz;
    sx = sy = sz = 0;
    while(N--){
        cin>>x>>y>>z;
        sx+=x;
        sy+=y;
        sz+=z;
    }
    if(sx==sy && sx==sz && sz==sy && sx==0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
