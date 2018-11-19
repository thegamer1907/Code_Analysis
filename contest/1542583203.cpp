#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define PI 3.1415926535897932384626433832
#define MOD 1000000007
#define MOD2 1000000009
#define bas 29
#define bas2 19
using namespace std;
int main() {
    int h , m , s , h1 , h2;
    cin>>h>>m>>s>>h1>>h2;
    if(h == 12)h = 0;
    if(h1 == 12)h1=0;
    if(h2 == 12)h2 = 0;
    h*=5;
    h1*=5;
    h2*=5;
    h+=m/12;
    bool o = false , se = false , th  = false;
    int x = h1;
    while(true){
        if(x == h){
            o = true;
        }
        if(x == m){
            se = true;
        }
        if(x == s){
            th = true;
        }
        x++;
        x%=60;
        if(x == h2)break;
    }
    if(o && se && th){
        cout<<"YES"<<endl;
        return 0;
    }else if(o == false && se == false && th == false){
        cout<<"YES"<<endl;
    }else {
        cout<<"NO";
    }
}
